import {SyntaxNode} from "web-tree-sitter";

export const childWithType = (node: SyntaxNode, type: string): SyntaxNode => {
    return node.children.find(c => c.type === type);
}
