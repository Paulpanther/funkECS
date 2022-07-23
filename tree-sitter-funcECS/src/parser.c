#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_component = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_system = 4,
  anon_sym_SEMI = 5,
  sym_name = 6,
  sym_number = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  anon_sym_STAR = 12,
  anon_sym_SLASH = 13,
  anon_sym_EQ_EQ = 14,
  anon_sym_BANG_EQ = 15,
  anon_sym_LT = 16,
  anon_sym_GT = 17,
  anon_sym_LT_EQ = 18,
  anon_sym_GT_EQ = 19,
  anon_sym_AMP_AMP = 20,
  anon_sym_PIPE_PIPE = 21,
  sym_source_file = 22,
  sym_component_declaration = 23,
  sym_component_body = 24,
  sym_system_declaration = 25,
  sym_system_precondition = 26,
  sym_system_body = 27,
  sym_pipeline = 28,
  sym_expression = 29,
  sym_primary = 30,
  sym_boolean = 31,
  sym_binary_expression = 32,
  sym_operator = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_system_body_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_component] = "component",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_system] = "system",
  [anon_sym_SEMI] = ";",
  [sym_name] = "name",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [sym_source_file] = "source_file",
  [sym_component_declaration] = "component_declaration",
  [sym_component_body] = "component_body",
  [sym_system_declaration] = "system_declaration",
  [sym_system_precondition] = "system_precondition",
  [sym_system_body] = "system_body",
  [sym_pipeline] = "pipeline",
  [sym_expression] = "expression",
  [sym_primary] = "primary",
  [sym_boolean] = "boolean",
  [sym_binary_expression] = "binary_expression",
  [sym_operator] = "operator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_system_body_repeat1] = "system_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_component] = anon_sym_component,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_name] = sym_name,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [sym_source_file] = sym_source_file,
  [sym_component_declaration] = sym_component_declaration,
  [sym_component_body] = sym_component_body,
  [sym_system_declaration] = sym_system_declaration,
  [sym_system_precondition] = sym_system_precondition,
  [sym_system_body] = sym_system_body,
  [sym_pipeline] = sym_pipeline,
  [sym_expression] = sym_expression,
  [sym_primary] = sym_primary,
  [sym_boolean] = sym_boolean,
  [sym_binary_expression] = sym_binary_expression,
  [sym_operator] = sym_operator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_system_body_repeat1] = aux_sym_system_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_component] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_component_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_component_body] = {
    .visible = true,
    .named = true,
  },
  [sym_system_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_system_precondition] = {
    .visible = true,
    .named = true,
  },
  [sym_system_body] = {
    .visible = true,
    .named = true,
  },
  [sym_pipeline] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_primary] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_body_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_name = 2,
  field_operator = 3,
  field_precondition = 4,
  field_right = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_precondition] = "precondition",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [4] =
    {field_name, 1},
    {field_precondition, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '>') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(47);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 23:
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == '|') ADVANCE(48);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_component] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_component_declaration] = STATE(9),
    [sym_system_declaration] = STATE(9),
    [sym_expression] = STATE(6),
    [sym_primary] = STATE(5),
    [sym_boolean] = STATE(3),
    [sym_binary_expression] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_component] = ACTIONS(5),
    [anon_sym_system] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
  },
  [2] = {
    [sym_operator] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_component] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(13),
    [anon_sym_system] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_AMP_AMP] = ACTIONS(13),
    [anon_sym_PIPE_PIPE] = ACTIONS(13),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_component] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(17),
    [anon_sym_system] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym_number] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(17),
    [anon_sym_BANG_EQ] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_AMP_AMP] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(17),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_component] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_system] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(21),
    [sym_number] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE_PIPE] = ACTIONS(21),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_system] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(25),
    [sym_number] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(25),
  },
  [6] = {
    [sym_operator] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(29),
    [anon_sym_system] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_AMP_AMP] = ACTIONS(31),
    [anon_sym_PIPE_PIPE] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    STATE(15), 1,
      sym_operator,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(31), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [24] = 9,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_component,
    ACTIONS(42), 1,
      anon_sym_system,
    ACTIONS(45), 1,
      sym_number,
    STATE(3), 1,
      sym_boolean,
    STATE(6), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
    STATE(8), 3,
      sym_component_declaration,
      sym_system_declaration,
      aux_sym_source_file_repeat1,
  [56] = 9,
    ACTIONS(5), 1,
      anon_sym_component,
    ACTIONS(7), 1,
      anon_sym_system,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_boolean,
    STATE(6), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
    STATE(8), 3,
      sym_component_declaration,
      sym_system_declaration,
      aux_sym_source_file_repeat1,
  [88] = 8,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_boolean,
    STATE(7), 1,
      sym_expression,
    STATE(12), 1,
      aux_sym_system_body_repeat1,
    STATE(31), 1,
      sym_pipeline,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [115] = 8,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_boolean,
    STATE(7), 1,
      sym_expression,
    STATE(12), 1,
      aux_sym_system_body_repeat1,
    STATE(26), 1,
      sym_pipeline,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [142] = 8,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_boolean,
    STATE(7), 1,
      sym_expression,
    STATE(13), 1,
      aux_sym_system_body_repeat1,
    STATE(31), 1,
      sym_pipeline,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [169] = 8,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 1,
      sym_number,
    STATE(3), 1,
      sym_boolean,
    STATE(7), 1,
      sym_expression,
    STATE(13), 1,
      aux_sym_system_body_repeat1,
    STATE(31), 1,
      sym_pipeline,
    ACTIONS(62), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [196] = 3,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_component_body,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [211] = 5,
    ACTIONS(9), 1,
      sym_number,
    STATE(2), 1,
      sym_expression,
    STATE(3), 1,
      sym_boolean,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [229] = 1,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [238] = 1,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [247] = 1,
    ACTIONS(73), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [256] = 1,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [265] = 1,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [274] = 1,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [283] = 1,
    ACTIONS(57), 4,
      anon_sym_RPAREN,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [290] = 1,
    ACTIONS(81), 3,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [296] = 3,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_system_body,
    STATE(25), 1,
      sym_system_precondition,
  [306] = 2,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_system_body,
  [313] = 2,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 1,
      anon_sym_SEMI,
  [320] = 1,
    ACTIONS(91), 1,
      sym_name,
  [324] = 1,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
  [328] = 1,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
  [332] = 1,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
  [336] = 1,
    ACTIONS(89), 1,
      anon_sym_SEMI,
  [340] = 1,
    ACTIONS(99), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 24,
  [SMALL_STATE(9)] = 56,
  [SMALL_STATE(10)] = 88,
  [SMALL_STATE(11)] = 115,
  [SMALL_STATE(12)] = 142,
  [SMALL_STATE(13)] = 169,
  [SMALL_STATE(14)] = 196,
  [SMALL_STATE(15)] = 211,
  [SMALL_STATE(16)] = 229,
  [SMALL_STATE(17)] = 238,
  [SMALL_STATE(18)] = 247,
  [SMALL_STATE(19)] = 256,
  [SMALL_STATE(20)] = 265,
  [SMALL_STATE(21)] = 274,
  [SMALL_STATE(22)] = 283,
  [SMALL_STATE(23)] = 290,
  [SMALL_STATE(24)] = 296,
  [SMALL_STATE(25)] = 306,
  [SMALL_STATE(26)] = 313,
  [SMALL_STATE(27)] = 320,
  [SMALL_STATE(28)] = 324,
  [SMALL_STATE(29)] = 328,
  [SMALL_STATE(30)] = 332,
  [SMALL_STATE(31)] = 336,
  [SMALL_STATE(32)] = 340,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(3),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 2, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 4, .production_id = 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 3, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_body, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_body, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [95] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_precondition, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_funkECS(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
