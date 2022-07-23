import React from "react";
import Editor from "react-simple-code-editor";
import Parser from "web-tree-sitter";

export const App: React.VFC = () => {
  const initializeParsing = async () => {
    const parser = new Parser();
    // await parser.init();
  };

  const [code, setCode] = React.useState("");
  return (
    <div>
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
    </div>
  );
};
