import { SyntaxNode } from "web-tree-sitter";
import { Systems } from "./Systems";
import { World } from "./World";
import { System } from "./Models";
import { childWithType } from "./util";
import { Scope } from "./Scope";

export class Interpreter {
  private world = new World();
  private systems = new Systems(this.world, this);

  constructor(private stdout: (out: string) => void) {}

  public evaluateFileAndRun(code: SyntaxNode) {
    for (const child of code.namedChildren) {
      this.evaluateDeclaration(child);
    }
    this.systems.executeAll();
  }

  public evaluateDeclaration(code: SyntaxNode) {
    switch (code.type) {
      case "system_declaration":
        return this.storeSystem(code);
      case "component_declaration":
        return this.storeComponent(code);
    }

    throw new Error(`Invalid expression in root with type ${code.type}`);
  }

  public storeSystem(code: SyntaxNode) {
    const name = code.childForFieldName("name").text;
    const precondition = code.childForFieldName("precondition");
    const body = childWithType(code, "system_body");

    this.systems.addSystem(new System(name, body, precondition));
  }

  public storeComponent(code: SyntaxNode) {}

  public evaluatePipelines(code: SyntaxNode, scope: Scope): any {
    for (const child of code.namedChildren) {
      const result = this.evaluateExpression(child, scope);
      scope.last = result;
    }
  }

  public evaluateExpression(code: SyntaxNode, scope: Scope): any {
    switch (code.type) {
      case "pipeline":
        return this.evaluatePipeline(code, scope);
      case "pipeline_operation":
        return this.evaluateOperation(code, scope);
      case "number":
        return this.evaluateNumber(code);
      case "boolean":
        return this.evaluateBoolean(code);
      case "variable":
        return this.evaluateVariable(code, scope);
      case "last_value":
        return scope.last;
      case "binary_expression":
        return this.evaluateBinary(code, scope);
    }
    throw new Error(`No case for expression type ${code.type}`);
  }

  public evaluatePipeline(code: SyntaxNode, parentScope: Scope): any {
    const scope = new Scope(parentScope);
    scope.last = this.evaluateExpression(code.firstNamedChild, scope);

    for (const pipe of code.namedChildren.slice(1)) {
      switch (pipe.type) {
        case "assignment":
          const name = pipe.childForFieldName("name").text;
          scope.setValue(name, scope.last);
          if (pipe.id === code.lastNamedChild.id) {
            scope.parent.setValue(name, scope.last);
          }
          break;
        case "reduce":
          scope.last = this.evaluateReduce(pipe, scope);
          break;
        case "pipeline_operation":
          scope.last = this.evaluateOperation(pipe, scope);
          break;
        default:
          throw new Error(`No case for pipe ${pipe.type}`);
      }
    }
    return scope.last;
  }

  public evaluateReduce(code: SyntaxNode, scope: Scope) {
    // TODO
    throw new Error("reduce not yet implemented");
  }

  public evaluateOperation(code: SyntaxNode, scope: Scope) {
    let value;
    switch (code.firstNamedChild.text) {
      case "map":
        if (code.namedChildCount !== 2)
          throw new Error("map takes exactly 1 argument");
        value = this.evaluateExpression(code.namedChildren[1], scope);
        return value;
      case "print":
        if (code.namedChildCount !== 2)
          throw new Error("print takes exactly 1 argument");
        value = this.evaluateExpression(code.namedChildren[1], scope);
        this.stdout(value);
        return value;
      default:
        throw new Error(
          `Operation ${code.firstNamedChild.text} not implemented`
        );
    }
  }

  public evaluateNumber(code: SyntaxNode) {
    return Number(code.text);
  }

  public evaluateBoolean(code: SyntaxNode) {
    return code.text === "true";
  }

  public evaluateVariable(code: SyntaxNode, scope: Scope) {
    return scope.getValue(code.text, () => {
      throw new Error(`Variable ${code.text} not found`);
    });
  }

  public evaluateBinary(code: SyntaxNode, scope: Scope) {
    const operator = code.childForFieldName("operator").text;
    const left = code.childForFieldName("left");
    const right = code.childForFieldName("right");

    const leftValue = this.evaluateExpression(left, scope);
    const rightValue = this.evaluateExpression(right, scope);

    switch (operator) {
      case "+":
        return leftValue + rightValue;
      case "-":
        return leftValue - rightValue;
      case "*":
        return leftValue * rightValue;
      case "/":
        return leftValue / rightValue;
      case "==":
        return leftValue === rightValue;
      case "!=":
        return leftValue !== rightValue;
      case "<":
        return leftValue < rightValue;
      case ">":
        return leftValue > rightValue;
      case "<=":
        return leftValue <= rightValue;
      case ">=":
        return leftValue >= rightValue;
      case "&&":
        return leftValue && rightValue;
      case "||":
        return leftValue || rightValue;
    }
    throw new Error(`No case for operator ${operator}`);
  }
}
