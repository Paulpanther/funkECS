import React, { useState, useEffect } from "react";
import Editor from "react-simple-code-editor";
import Parser, { Language, Query, Tree } from "web-tree-sitter";

export const App: React.VFC = () => {
  const [parser, setParser] = useState<Parser | null>(null);
  const [language, setLanguage] = useState<Language | null>(null);
  const [highlightQuery, setHighlightQuery] = useState<Query | null>(null);

  useEffect(() => {
    (async () => {
      await Parser.init();
      const parser = new Parser();
      const language = await Parser.Language.load("/tree-sitter-funkECS.wasm");
      parser.setLanguage(language);
      setParser(parser);
      setLanguage(language);
      setHighlightQuery(
        language.query(`
            "hello" @variable
        `)
      );
    })();
  }, []);

  const [code, setCode] = React.useState("");

  const highlight = (tree: Tree) => {
    for (const capture of highlightQuery.captures(tree.rootNode)) {
    }
    return "hi";
  };

  return (
    <div>
      {parser ? (
        <Editor
          value={code}
          onValueChange={(code) => setCode(code)}
          highlight={(code) => highlight(parser.parse(code))}
          padding={10}
          style={{
            fontFamily: '"Fira code", "Fira Mono", monospace',
            fontSize: 12,
          }}
        />
      ) : (
        "Loading..."
      )}
    </div>
  );
};
