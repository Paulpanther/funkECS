import {SyntaxNode} from "web-tree-sitter";
import {Systems} from "./Systems";
import {World} from "./World";
import {System} from "./Models";
import {childWithType} from "./util";

export const interpret = (code: SyntaxNode) => {
    return new Interpreter().evaluate(code)
};

export class Interpreter {
    private world = new World();
    private systems = new Systems(this.world, this);

    public evaluate(code: SyntaxNode) {
        const result = this.evaluateExpression(code.children[0]);
        console.log(result);
        return result
    }

    public storeSystem(code: SyntaxNode) {
        const name = code.childForFieldName("name").text;
        const precondition = code.childForFieldName("precondition");
        const body = childWithType(code, "system_body");

        this.systems.addSystem(new System(name, body, precondition))
    }

    public storeComponent(code: SyntaxNode) {

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
