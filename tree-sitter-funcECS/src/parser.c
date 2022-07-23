#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_component = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_COLON = 4,
  anon_sym_system = 5,
  anon_sym_SEMI = 6,
  sym_variable = 7,
  sym_name = 8,
  sym_number = 9,
  anon_sym_true = 10,
  anon_sym_false = 11,
  anon_sym_PLUS = 12,
  anon_sym_DASH = 13,
  anon_sym_STAR = 14,
  anon_sym_SLASH = 15,
  anon_sym_EQ_EQ = 16,
  anon_sym_BANG_EQ = 17,
  anon_sym_LT = 18,
  anon_sym_GT = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_GT_EQ = 21,
  anon_sym_AMP_AMP = 22,
  anon_sym_PIPE_PIPE = 23,
  anon_sym_int = 24,
  anon_sym_bool = 25,
  sym_source_file = 26,
  sym_component_declaration = 27,
  sym_component_body = 28,
  sym_field_declaration = 29,
  sym_system_declaration = 30,
  sym_system_precondition = 31,
  sym_system_body = 32,
  sym_pipeline = 33,
  sym_expression = 34,
  sym_primary = 35,
  sym_boolean = 36,
  sym_binary_expression = 37,
  sym_operator = 38,
  sym_type = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_component_body_repeat1 = 41,
  aux_sym_system_body_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_component] = "component",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_system] = "system",
  [anon_sym_SEMI] = ";",
  [sym_variable] = "variable",
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
  [anon_sym_int] = "int",
  [anon_sym_bool] = "bool",
  [sym_source_file] = "source_file",
  [sym_component_declaration] = "component_declaration",
  [sym_component_body] = "component_body",
  [sym_field_declaration] = "field_declaration",
  [sym_system_declaration] = "system_declaration",
  [sym_system_precondition] = "system_precondition",
  [sym_system_body] = "system_body",
  [sym_pipeline] = "pipeline",
  [sym_expression] = "expression",
  [sym_primary] = "primary",
  [sym_boolean] = "boolean",
  [sym_binary_expression] = "binary_expression",
  [sym_operator] = "operator",
  [sym_type] = "type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_component_body_repeat1] = "component_body_repeat1",
  [aux_sym_system_body_repeat1] = "system_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_component] = anon_sym_component,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_variable] = sym_variable,
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
  [anon_sym_int] = anon_sym_int,
  [anon_sym_bool] = anon_sym_bool,
  [sym_source_file] = sym_source_file,
  [sym_component_declaration] = sym_component_declaration,
  [sym_component_body] = sym_component_body,
  [sym_field_declaration] = sym_field_declaration,
  [sym_system_declaration] = sym_system_declaration,
  [sym_system_precondition] = sym_system_precondition,
  [sym_system_body] = sym_system_body,
  [sym_pipeline] = sym_pipeline,
  [sym_expression] = sym_expression,
  [sym_primary] = sym_primary,
  [sym_boolean] = sym_boolean,
  [sym_binary_expression] = sym_binary_expression,
  [sym_operator] = sym_operator,
  [sym_type] = sym_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_component_body_repeat1] = aux_sym_component_body_repeat1,
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
  [anon_sym_COLON] = {
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
  [sym_variable] = {
    .visible = true,
    .named = true,
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
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
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
  [sym_field_declaration] = {
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
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_body_repeat1] = {
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
  field_type = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_precondition] = "precondition",
  [field_right] = "right",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
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
  [6] =
    {field_name, 0},
    {field_type, 2},
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
      if (eof) ADVANCE(31);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 29:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == '|') ADVANCE(55);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_bool);
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
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_component] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(34),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(15), 1,
      sym_operator,
    ACTIONS(15), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 18,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_RPAREN,
      anon_sym_system,
      anon_sym_SEMI,
      sym_number,
      anon_sym_true,
      anon_sym_false,
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
  [28] = 2,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 18,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_RPAREN,
      anon_sym_system,
      anon_sym_SEMI,
      sym_number,
      anon_sym_true,
      anon_sym_false,
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
  [53] = 2,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 18,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_RPAREN,
      anon_sym_system,
      anon_sym_SEMI,
      sym_number,
      anon_sym_true,
      anon_sym_false,
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
  [78] = 2,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 18,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_RPAREN,
      anon_sym_system,
      anon_sym_SEMI,
      sym_number,
      anon_sym_true,
      anon_sym_false,
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
  [103] = 4,
    STATE(15), 1,
      sym_operator,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
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
  [131] = 4,
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
  [155] = 9,
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
  [187] = 9,
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
  [219] = 8,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(55), 1,
      sym_number,
    STATE(3), 1,
      sym_boolean,
    STATE(7), 1,
      sym_expression,
    STATE(10), 1,
      aux_sym_system_body_repeat1,
    STATE(38), 1,
      sym_pipeline,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [246] = 8,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_boolean,
    STATE(7), 1,
      sym_expression,
    STATE(12), 1,
      aux_sym_system_body_repeat1,
    STATE(38), 1,
      sym_pipeline,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [273] = 8,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_boolean,
    STATE(7), 1,
      sym_expression,
    STATE(10), 1,
      aux_sym_system_body_repeat1,
    STATE(38), 1,
      sym_pipeline,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [300] = 8,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(61), 1,
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
  [327] = 3,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_component_body,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [342] = 5,
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
  [360] = 1,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [369] = 1,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [378] = 1,
    ACTIONS(73), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [387] = 1,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [396] = 1,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [405] = 1,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [414] = 1,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [423] = 3,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(85), 1,
      sym_variable,
    STATE(26), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [434] = 1,
    ACTIONS(53), 4,
      anon_sym_RPAREN,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [441] = 3,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 1,
      sym_variable,
    STATE(25), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [452] = 3,
    ACTIONS(85), 1,
      sym_variable,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    STATE(25), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [463] = 3,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_system_body,
    STATE(30), 1,
      sym_system_precondition,
  [473] = 2,
    STATE(33), 1,
      sym_type,
    ACTIONS(96), 2,
      anon_sym_int,
      anon_sym_bool,
  [481] = 1,
    ACTIONS(98), 3,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [487] = 2,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_system_body,
  [494] = 2,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(104), 1,
      anon_sym_SEMI,
  [501] = 1,
    ACTIONS(106), 2,
      anon_sym_RPAREN,
      sym_variable,
  [506] = 1,
    ACTIONS(108), 2,
      anon_sym_RPAREN,
      sym_variable,
  [511] = 1,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
  [515] = 1,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
  [519] = 1,
    ACTIONS(114), 1,
      anon_sym_COLON,
  [523] = 1,
    ACTIONS(116), 1,
      sym_name,
  [527] = 1,
    ACTIONS(104), 1,
      anon_sym_SEMI,
  [531] = 1,
    ACTIONS(118), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 103,
  [SMALL_STATE(7)] = 131,
  [SMALL_STATE(8)] = 155,
  [SMALL_STATE(9)] = 187,
  [SMALL_STATE(10)] = 219,
  [SMALL_STATE(11)] = 246,
  [SMALL_STATE(12)] = 273,
  [SMALL_STATE(13)] = 300,
  [SMALL_STATE(14)] = 327,
  [SMALL_STATE(15)] = 342,
  [SMALL_STATE(16)] = 360,
  [SMALL_STATE(17)] = 369,
  [SMALL_STATE(18)] = 378,
  [SMALL_STATE(19)] = 387,
  [SMALL_STATE(20)] = 396,
  [SMALL_STATE(21)] = 405,
  [SMALL_STATE(22)] = 414,
  [SMALL_STATE(23)] = 423,
  [SMALL_STATE(24)] = 434,
  [SMALL_STATE(25)] = 441,
  [SMALL_STATE(26)] = 452,
  [SMALL_STATE(27)] = 463,
  [SMALL_STATE(28)] = 473,
  [SMALL_STATE(29)] = 481,
  [SMALL_STATE(30)] = 487,
  [SMALL_STATE(31)] = 494,
  [SMALL_STATE(32)] = 501,
  [SMALL_STATE(33)] = 506,
  [SMALL_STATE(34)] = 511,
  [SMALL_STATE(35)] = 515,
  [SMALL_STATE(36)] = 519,
  [SMALL_STATE(37)] = 523,
  [SMALL_STATE(38)] = 527,
  [SMALL_STATE(39)] = 531,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(4),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 2, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_body, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 3, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_body, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 4, .production_id = 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(36),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 4),
  [110] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_precondition, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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
