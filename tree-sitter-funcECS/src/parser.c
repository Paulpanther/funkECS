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
      if (eof) ADVANCE(31);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(81);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(37);
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
      if (lookahead == 't') ADVANCE(83);
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
      if (eof) ADVANCE(31);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_system);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(82);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'y') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
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
    [sym_variable] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(19), 1,
      sym_operator,
    ACTIONS(17), 9,
      anon_sym_component,
      anon_sym_system,
      anon_sym_PIPE,
      anon_sym_EQ,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 15,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      sym_number,
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
  [32] = 2,
    ACTIONS(21), 9,
      anon_sym_component,
      anon_sym_system,
      anon_sym_PIPE,
      anon_sym_EQ,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 15,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      sym_number,
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
  [61] = 2,
    ACTIONS(25), 9,
      anon_sym_component,
      anon_sym_system,
      anon_sym_PIPE,
      anon_sym_EQ,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 15,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      sym_number,
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
  [90] = 2,
    ACTIONS(29), 9,
      anon_sym_component,
      anon_sym_system,
      anon_sym_PIPE,
      anon_sym_EQ,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 15,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      sym_number,
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
  [119] = 8,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(35), 1,
      anon_sym_EQ,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    STATE(19), 1,
      sym_operator,
    ACTIONS(31), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(17), 4,
      sym_pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
    ACTIONS(39), 10,
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
  [158] = 5,
    STATE(19), 1,
      sym_operator,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(45), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 10,
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
  [189] = 5,
    STATE(19), 1,
      sym_operator,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(47), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(39), 10,
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
  [218] = 10,
    ACTIONS(5), 1,
      anon_sym_component,
    ACTIONS(7), 1,
      anon_sym_system,
    ACTIONS(9), 1,
      sym_variable,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_boolean,
    STATE(7), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
    STATE(10), 3,
      sym_component_declaration,
      sym_system_declaration,
      aux_sym_source_file_repeat1,
  [253] = 10,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_component,
    ACTIONS(58), 1,
      anon_sym_system,
    ACTIONS(61), 1,
      sym_variable,
    ACTIONS(64), 1,
      sym_number,
    STATE(3), 1,
      sym_boolean,
    STATE(7), 1,
      sym_expression,
    ACTIONS(67), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
    STATE(10), 3,
      sym_component_declaration,
      sym_system_declaration,
      aux_sym_source_file_repeat1,
  [288] = 9,
    ACTIONS(9), 1,
      sym_variable,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_boolean,
    STATE(6), 1,
      sym_expression,
    STATE(14), 1,
      aux_sym_system_body_repeat1,
    STATE(38), 1,
      sym_pipeline,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [318] = 9,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    ACTIONS(74), 1,
      sym_variable,
    ACTIONS(77), 1,
      sym_number,
    STATE(3), 1,
      sym_boolean,
    STATE(6), 1,
      sym_expression,
    STATE(12), 1,
      aux_sym_system_body_repeat1,
    STATE(43), 1,
      sym_pipeline,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [348] = 9,
    ACTIONS(9), 1,
      sym_variable,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_boolean,
    STATE(6), 1,
      sym_expression,
    STATE(14), 1,
      aux_sym_system_body_repeat1,
    STATE(43), 1,
      sym_pipeline,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [378] = 9,
    ACTIONS(9), 1,
      sym_variable,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_boolean,
    STATE(6), 1,
      sym_expression,
    STATE(12), 1,
      aux_sym_system_body_repeat1,
    STATE(43), 1,
      sym_pipeline,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [408] = 4,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_component_body,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(87), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [426] = 5,
    ACTIONS(93), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      anon_sym_EQ,
    ACTIONS(99), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(16), 4,
      sym_pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
  [446] = 5,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_EQ,
    ACTIONS(102), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(16), 4,
      sym_pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
  [466] = 6,
    ACTIONS(9), 1,
      sym_variable,
    ACTIONS(11), 1,
      sym_number,
    STATE(3), 1,
      sym_boolean,
    STATE(8), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [487] = 6,
    ACTIONS(9), 1,
      sym_variable,
    ACTIONS(11), 1,
      sym_number,
    STATE(2), 1,
      sym_expression,
    STATE(3), 1,
      sym_boolean,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [508] = 2,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(110), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [520] = 2,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(114), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [532] = 2,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(118), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [544] = 2,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(122), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [556] = 2,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(126), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [568] = 2,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(130), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [580] = 2,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(134), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [592] = 1,
    ACTIONS(136), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_DOLLAR,
  [600] = 2,
    ACTIONS(72), 2,
      anon_sym_RPAREN,
      sym_number,
    ACTIONS(138), 3,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [610] = 1,
    ACTIONS(140), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_DOLLAR,
  [618] = 3,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(144), 1,
      sym_variable,
    STATE(31), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [629] = 3,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 1,
      sym_variable,
    STATE(31), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [640] = 3,
    ACTIONS(144), 1,
      sym_variable,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(30), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [651] = 2,
    ACTIONS(155), 1,
      sym_number,
    ACTIONS(153), 3,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [660] = 3,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_system_body,
    STATE(36), 1,
      sym_system_precondition,
  [670] = 2,
    STATE(37), 1,
      sym_type,
    ACTIONS(159), 2,
      anon_sym_int,
      anon_sym_bool,
  [678] = 2,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_system_body,
  [685] = 1,
    ACTIONS(163), 2,
      anon_sym_RPAREN,
      sym_variable,
  [690] = 2,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 1,
      anon_sym_SEMI,
  [697] = 1,
    ACTIONS(169), 2,
      anon_sym_RPAREN,
      sym_variable,
  [702] = 1,
    ACTIONS(171), 1,
      anon_sym_COLON,
  [706] = 1,
    ACTIONS(173), 1,
      sym_variable,
  [710] = 1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
  [714] = 1,
    ACTIONS(167), 1,
      anon_sym_SEMI,
  [718] = 1,
    ACTIONS(177), 1,
      sym_name,
  [722] = 1,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
  [726] = 1,
    ACTIONS(181), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 61,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 119,
  [SMALL_STATE(7)] = 158,
  [SMALL_STATE(8)] = 189,
  [SMALL_STATE(9)] = 218,
  [SMALL_STATE(10)] = 253,
  [SMALL_STATE(11)] = 288,
  [SMALL_STATE(12)] = 318,
  [SMALL_STATE(13)] = 348,
  [SMALL_STATE(14)] = 378,
  [SMALL_STATE(15)] = 408,
  [SMALL_STATE(16)] = 426,
  [SMALL_STATE(17)] = 446,
  [SMALL_STATE(18)] = 466,
  [SMALL_STATE(19)] = 487,
  [SMALL_STATE(20)] = 508,
  [SMALL_STATE(21)] = 520,
  [SMALL_STATE(22)] = 532,
  [SMALL_STATE(23)] = 544,
  [SMALL_STATE(24)] = 556,
  [SMALL_STATE(25)] = 568,
  [SMALL_STATE(26)] = 580,
  [SMALL_STATE(27)] = 592,
  [SMALL_STATE(28)] = 600,
  [SMALL_STATE(29)] = 610,
  [SMALL_STATE(30)] = 618,
  [SMALL_STATE(31)] = 629,
  [SMALL_STATE(32)] = 640,
  [SMALL_STATE(33)] = 651,
  [SMALL_STATE(34)] = 660,
  [SMALL_STATE(35)] = 670,
  [SMALL_STATE(36)] = 678,
  [SMALL_STATE(37)] = 685,
  [SMALL_STATE(38)] = 690,
  [SMALL_STATE(39)] = 697,
  [SMALL_STATE(40)] = 702,
  [SMALL_STATE(41)] = 706,
  [SMALL_STATE(42)] = 710,
  [SMALL_STATE(43)] = 714,
  [SMALL_STATE(44)] = 718,
  [SMALL_STATE(45)] = 722,
  [SMALL_STATE(46)] = 726,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(3),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(3),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(4),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 2, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 2, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(18),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(41),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(27),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_body, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_body, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_body, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_body, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 4, .production_id = 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_declaration, 4, .production_id = 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_body, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_body, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, .production_id = 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 3, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_declaration, 3, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_system_body_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(40),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_precondition, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [179] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
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
