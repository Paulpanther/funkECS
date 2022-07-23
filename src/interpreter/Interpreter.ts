import {SyntaxNode} from "web-tree-sitter";

export const interpret = (code: SyntaxNode) => {
    return new Interpreter().evaluate(code)
};

class Interpreter {
    public evaluate(code: SyntaxNode) {
        const result = this.evaluateExpression(code.children[0]);
        console.log(result);
        return result
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