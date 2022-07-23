import { SyntaxNode } from "web-tree-sitter";

export const childWithType = (node: SyntaxNode, type: string): SyntaxNode => {
  return node.children.find((c) => c.type === type);
};

export const expectBoolean = (expr: any, error: string): boolean => {
  if (typeof expr !== "boolean") {
    throw new Error(error);
  }
  return expr;
};
