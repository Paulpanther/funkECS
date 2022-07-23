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
      const result = this.evaluateExpression(child.firstNamedChild, scope);
      this.stdout(result + "\n");
    }
  }

  public evaluateExpression(code: SyntaxNode, scope: Scope): any {
    switch (code.type) {
      case "pipeline":
        return this.evaluatePipeline(code, scope);
      case "number":
        return this.evaluateNumber(code);
      case "boolean":
        return this.evaluateBoolean(code);
      case "binary_expression":
        return this.evaluateBinary(code, scope);
    }
    throw new Error(`No case for expression type ${code.type}`);
  }

  public evaluatePipeline(code: SyntaxNode, parentScope: Scope) {
    const scope = new Scope(parentScope);
    scope.last = this.evaluateExpression(code.firstNamedChild, scope);

    for (const pipe of code.namedChildren.slice(1)) {
      switch (pipe.type) {
        case "assignment":
          const name = pipe.childForFieldName("name").text;
          scope.setValue(name, scope.last);
          if (pipe === code.lastNamedChild) {
            scope.parent.setValue(name, scope.last);
          }
          break;
        // case "reduce":
        //   scope.last = this.evaluateReduce(pipe, scope);
        //   break;
        case "pipe":
          scope.last = this.evaluateExpression(
            pipe.childForFieldName("expr"),
            scope
          );
          break;
        default:
          throw new Error("No case for pipe ${pipe.type}");
      }
    }
  }

  public evaluateNumber(code: SyntaxNode) {
    return Number(code.text);
  }

  public evaluateBoolean(code: SyntaxNode) {
    return code.text === "true";
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
