#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
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
  anon_sym_PIPE = 7,
  anon_sym_EQ = 8,
  anon_sym_DOLLAR = 9,
  sym_variable = 10,
  sym_name = 11,
  sym_number = 12,
  anon_sym_true = 13,
  anon_sym_false = 14,
  anon_sym_PLUS = 15,
  anon_sym_DASH = 16,
  anon_sym_STAR = 17,
  anon_sym_SLASH = 18,
  anon_sym_EQ_EQ = 19,
  anon_sym_BANG_EQ = 20,
  anon_sym_LT = 21,
  anon_sym_GT = 22,
  anon_sym_LT_EQ = 23,
  anon_sym_GT_EQ = 24,
  anon_sym_AMP_AMP = 25,
  anon_sym_PIPE_PIPE = 26,
  anon_sym_int = 27,
  anon_sym_bool = 28,
  sym_source_file = 29,
  sym_component_declaration = 30,
  sym_component_body = 31,
  sym_field_declaration = 32,
  sym_system_declaration = 33,
  sym_system_precondition = 34,
  sym_system_body = 35,
  sym_pipeline = 36,
  sym_pipe = 37,
  sym_assignment = 38,
  sym_reduce = 39,
  sym_expression = 40,
  sym_primary = 41,
  sym_boolean = 42,
  sym_binary_expression = 43,
  sym_operator = 44,
  sym_type = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_component_body_repeat1 = 47,
  aux_sym_system_body_repeat1 = 48,
  aux_sym_pipeline_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_component] = "component",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_system] = "system",
  [anon_sym_SEMI] = ";",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ] = "=",
  [anon_sym_DOLLAR] = "$",
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
  [sym_pipe] = "pipe",
  [sym_assignment] = "assignment",
  [sym_reduce] = "reduce",
  [sym_expression] = "expression",
  [sym_primary] = "primary",
  [sym_boolean] = "boolean",
  [sym_binary_expression] = "binary_expression",
  [sym_operator] = "operator",
  [sym_type] = "type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_component_body_repeat1] = "component_body_repeat1",
  [aux_sym_system_body_repeat1] = "system_body_repeat1",
  [aux_sym_pipeline_repeat1] = "pipeline_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_component] = anon_sym_component,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
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
  [sym_pipe] = sym_pipe,
  [sym_assignment] = sym_assignment,
  [sym_reduce] = sym_reduce,
  [sym_expression] = sym_expression,
  [sym_primary] = sym_primary,
  [sym_boolean] = sym_boolean,
  [sym_binary_expression] = sym_binary_expression,
  [sym_operator] = sym_operator,
  [sym_type] = sym_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_component_body_repeat1] = aux_sym_component_body_repeat1,
  [aux_sym_system_body_repeat1] = aux_sym_system_body_repeat1,
  [aux_sym_pipeline_repeat1] = aux_sym_pipeline_repeat1,
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
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
  [sym_pipe] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_reduce] = {
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
  [aux_sym_pipeline_repeat1] = {
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
      if (eof) ADVANCE(29);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 28:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(56);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 58:
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
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
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
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
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
    [sym_source_file] = STATE(45),
    [sym_component_declaration] = STATE(9),
    [sym_system_declaration] = STATE(9),
    [sym_expression] = STATE(7),
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
    STATE(19), 1,
      sym_operator,
    ACTIONS(15), 4,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 19,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_RPAREN,
      anon_sym_system,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
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
  [31] = 2,
    ACTIONS(19), 4,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 19,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_RPAREN,
      anon_sym_system,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
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
  [59] = 2,
    ACTIONS(23), 4,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 19,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_RPAREN,
      anon_sym_system,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
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
  [87] = 2,
    ACTIONS(27), 4,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 19,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_RPAREN,
      anon_sym_system,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
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
  [115] = 8,
    ACTIONS(31), 1,
      anon_sym_PIPE,
    ACTIONS(33), 1,
      anon_sym_EQ,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(19), 1,
      sym_operator,
    ACTIONS(29), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(16), 4,
      sym_pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
    ACTIONS(37), 10,
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
  [154] = 4,
    STATE(19), 1,
      sym_operator,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 10,
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
  [182] = 5,
    STATE(19), 1,
      sym_operator,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(43), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(37), 10,
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
  [211] = 9,
    ACTIONS(5), 1,
      anon_sym_component,
    ACTIONS(7), 1,
      anon_sym_system,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_boolean,
    STATE(7), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
    STATE(10), 3,
      sym_component_declaration,
      sym_system_declaration,
      aux_sym_source_file_repeat1,
  [243] = 9,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_component,
    ACTIONS(54), 1,
      anon_sym_system,
    ACTIONS(57), 1,
      sym_number,
    STATE(3), 1,
      sym_boolean,
    STATE(7), 1,
      sym_expression,
    ACTIONS(60), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
    STATE(10), 3,
      sym_component_declaration,
      sym_system_declaration,
      aux_sym_source_file_repeat1,
  [275] = 8,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_boolean,
    STATE(6), 1,
      sym_expression,
    STATE(14), 1,
      aux_sym_system_body_repeat1,
    STATE(37), 1,
      sym_pipeline,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [302] = 8,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 1,
      sym_number,
    STATE(3), 1,
      sym_boolean,
    STATE(6), 1,
      sym_expression,
    STATE(12), 1,
      aux_sym_system_body_repeat1,
    STATE(43), 1,
      sym_pipeline,
    ACTIONS(70), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [329] = 8,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_boolean,
    STATE(6), 1,
      sym_expression,
    STATE(14), 1,
      aux_sym_system_body_repeat1,
    STATE(43), 1,
      sym_pipeline,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [356] = 8,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_boolean,
    STATE(6), 1,
      sym_expression,
    STATE(12), 1,
      aux_sym_system_body_repeat1,
    STATE(43), 1,
      sym_pipeline,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [383] = 5,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    ACTIONS(80), 1,
      anon_sym_EQ,
    ACTIONS(83), 1,
      anon_sym_DOLLAR,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(15), 4,
      sym_pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
  [403] = 5,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_EQ,
    ACTIONS(86), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(15), 4,
      sym_pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
  [423] = 3,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_component_body,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [438] = 5,
    ACTIONS(9), 1,
      sym_number,
    STATE(3), 1,
      sym_boolean,
    STATE(8), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [456] = 5,
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
  [474] = 1,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [483] = 1,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [492] = 1,
    ACTIONS(100), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [501] = 1,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [510] = 1,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [519] = 1,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [528] = 1,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [537] = 1,
    ACTIONS(110), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_DOLLAR,
  [545] = 1,
    ACTIONS(112), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_DOLLAR,
  [553] = 1,
    ACTIONS(65), 4,
      anon_sym_RPAREN,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [560] = 3,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    ACTIONS(116), 1,
      sym_variable,
    STATE(30), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [571] = 3,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(121), 1,
      sym_variable,
    STATE(32), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [582] = 3,
    ACTIONS(121), 1,
      sym_variable,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(30), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [593] = 2,
    STATE(38), 1,
      sym_type,
    ACTIONS(125), 2,
      anon_sym_int,
      anon_sym_bool,
  [601] = 1,
    ACTIONS(127), 3,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [607] = 3,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_system_body,
    STATE(36), 1,
      sym_system_precondition,
  [617] = 2,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_system_body,
  [624] = 2,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 1,
      anon_sym_SEMI,
  [631] = 1,
    ACTIONS(137), 2,
      anon_sym_RPAREN,
      sym_variable,
  [636] = 1,
    ACTIONS(139), 2,
      anon_sym_RPAREN,
      sym_variable,
  [641] = 1,
    ACTIONS(141), 1,
      anon_sym_COLON,
  [645] = 1,
    ACTIONS(143), 1,
      sym_variable,
  [649] = 1,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
  [653] = 1,
    ACTIONS(135), 1,
      anon_sym_SEMI,
  [657] = 1,
    ACTIONS(147), 1,
      sym_name,
  [661] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
  [665] = 1,
    ACTIONS(151), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 59,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 115,
  [SMALL_STATE(7)] = 154,
  [SMALL_STATE(8)] = 182,
  [SMALL_STATE(9)] = 211,
  [SMALL_STATE(10)] = 243,
  [SMALL_STATE(11)] = 275,
  [SMALL_STATE(12)] = 302,
  [SMALL_STATE(13)] = 329,
  [SMALL_STATE(14)] = 356,
  [SMALL_STATE(15)] = 383,
  [SMALL_STATE(16)] = 403,
  [SMALL_STATE(17)] = 423,
  [SMALL_STATE(18)] = 438,
  [SMALL_STATE(19)] = 456,
  [SMALL_STATE(20)] = 474,
  [SMALL_STATE(21)] = 483,
  [SMALL_STATE(22)] = 492,
  [SMALL_STATE(23)] = 501,
  [SMALL_STATE(24)] = 510,
  [SMALL_STATE(25)] = 519,
  [SMALL_STATE(26)] = 528,
  [SMALL_STATE(27)] = 537,
  [SMALL_STATE(28)] = 545,
  [SMALL_STATE(29)] = 553,
  [SMALL_STATE(30)] = 560,
  [SMALL_STATE(31)] = 571,
  [SMALL_STATE(32)] = 582,
  [SMALL_STATE(33)] = 593,
  [SMALL_STATE(34)] = 601,
  [SMALL_STATE(35)] = 607,
  [SMALL_STATE(36)] = 617,
  [SMALL_STATE(37)] = 624,
  [SMALL_STATE(38)] = 631,
  [SMALL_STATE(39)] = 636,
  [SMALL_STATE(40)] = 641,
  [SMALL_STATE(41)] = 645,
  [SMALL_STATE(42)] = 649,
  [SMALL_STATE(43)] = 653,
  [SMALL_STATE(44)] = 657,
  [SMALL_STATE(45)] = 661,
  [SMALL_STATE(46)] = 665,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(3),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(18),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(41),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(28),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 2, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_body, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 3, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_body, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 4, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(40),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_precondition, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
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
