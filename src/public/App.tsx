import React, { useState, useEffect } from "react";
import Editor from "react-simple-code-editor";
import Parser from "web-tree-sitter";

export const App: React.VFC = () => {
  const [parser, setParser] = useState<Parser | null>(null);

  useEffect(() => {
    (async () => {
      await Parser.init();
      const parser = new Parser();
      parser.setLanguage(await Parser.Language.load("typescript"));
      setParser(parser);
    })();
  });

  const [code, setCode] = React.useState("");

  return (
    <div>
      {parser ? (
        <Editor
          value={code}
          onValueChange={(code) => setCode(code)}
          highlight={(code) => code}
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
