import {SyntaxNode} from "web-tree-sitter";
import {Systems} from "./Systems";
import {World} from "./World";
import {System} from "./Models";
import {childWithType} from "./util";

export class Interpreter {
    private world = new World();
    private systems = new Systems(this.world, this);

    constructor(
        private stdout: (out: string) => void
    ) {}

    public evaluateFileAndRun(code: SyntaxNode) {
        for (const child of code.children) {
            this.evaluate(child);
        }
        // const result = this.evaluateExpression(code.children[0]);
        // console.log(result);
        // return result
        this.systems.executeAll();
    }

    public evaluate(code: SyntaxNode) {
        switch (code.type) {
            case "system_declaration": return this.storeSystem(code);
            case "component_declaration": return this.storeComponent(code);
        }

        throw new Error(`Invalid expression in root with type ${code.type}`)
    }

    public storeSystem(code: SyntaxNode) {
        const name = code.childForFieldName("name").text;
        const precondition = code.childForFieldName("precondition");
        const body = childWithType(code, "system_body");

        this.systems.addSystem(new System(name, body, precondition))
    }

    public storeComponent(code: SyntaxNode) {

    }

    public evaluatePipelines(code: SyntaxNode): any {

    }

    public evaluateExpression(code: SyntaxNode): any {
        switch (code.type) {
            case "number": return this.evaluateNumber(code);
            case "binary_expression": return this.evaluateBinary(code);
        }
        throw new Error(`No case for expression type ${code.type}`);
    }

    public evaluateNumber(code: SyntaxNode) {
        return Number(code.text);
    }

    public evaluateBinary(code: SyntaxNode) {
        const operator = code.childForFieldName("operator").text;
        const left = code.childForFieldName("left");
        const right = code.childForFieldName("right");

        const leftValue = this.evaluateExpression(left);
        const rightValue = this.evaluateExpression(right);

        switch (operator) {
            case "+": return leftValue + rightValue;
            case "-": return leftValue - rightValue;
            case "*": return leftValue * rightValue;
            case "/": return leftValue / rightValue;
            case "==": return leftValue === rightValue;
            case "!=": return leftValue !== rightValue;
            case "<": return leftValue < rightValue;
            case ">": return leftValue > rightValue;
            case "<=": return leftValue <= rightValue;
            case ">=": return leftValue >= rightValue;
            case "&&": return leftValue && rightValue;
            case "||": return leftValue || rightValue;
        }
        throw new Error(`No case for operator ${operator}`);
    }
}
