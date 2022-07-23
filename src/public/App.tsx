import React, { useState, useEffect } from "react";
import Editor from "react-simple-code-editor";
import Parser, { Language, Query, Tree } from "web-tree-sitter";
import { Interpreter } from "../interpreter/Interpreter";

export const App: React.VFC = () => {
  const [code, setCode] = React.useState(`component Pos(
  x: int
  y: int
)

system Move(
  true = test;
  print test;
  print %;
)`);

  const [parser, setParser] = useState<Parser | null>(null);
  const [language, setLanguage] = useState<Language | null>(null);
  const [highlightQuery, setHighlightQuery] = useState<Query | null>(null);
  const [output, setOutput] = useState<string>("");

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
            [(number) (boolean)] @literal
            (name) @variable
            ["component" "system"] @declaration
            (ERROR) @error
        `)
      );
    })();
  }, []);

  const highlight = (tree: Tree) => {
    let adjusted = [];
    let lastEnd = 0;
    for (const match of highlightQuery.matches(tree.rootNode)) {
      const name = match.captures[0].name;
      const text = match.captures[0].node.text;
      const start = match.captures[0].node.startIndex;
      const end = match.captures[0].node.endIndex;

      if (start < lastEnd) {
        break;
      }
      if (start > lastEnd) {
        adjusted.push(code.substring(lastEnd, start));
      }
      adjusted.push(
        <span key={start} className={name}>
          {text}
        </span>
      );
      lastEnd = end;
    }

    if (lastEnd < code.length) {
      adjusted.push(code.substring(lastEnd));
    }

    return adjusted;
  };

  return (
    <div>
      {parser ? (
        <>
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
          <br />
          <button
            onClick={() => {
              setOutput("");

              const interp = new Interpreter((str) =>
                setOutput((s) => s + str)
              );
              interp.evaluateFileAndRun(parser.parse(code).rootNode);
            }}
          >
            Run
          </button>
          <br />
          <pre>{output}</pre>
        </>
      ) : (
        "Loading..."
      )}
    </div>
  );
};
