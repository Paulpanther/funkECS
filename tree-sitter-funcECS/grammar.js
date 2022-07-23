module.exports = grammar({
  name: 'funkECS',
  supertypes: $ => [$.expression, $.primary],

  rules: {
    source_file: $ => repeat(choice($.system_declaration, $.expression)),

    system_declaration: $ => seq("system", /[A-Z]\w+/, "()"),

    // system_name: $ => /[A-Z]\w+/

    expression: $ => choice($.binary_expression, $.primary),

    primary: $ => $.number,

    number: $ => /\d+(\.\d*)?/,

    binary_expression: $ => prec.left(seq($.expression, $.operator, $.expression)),

    operator: $ => "+"
  }
});

// + - * / == !=
