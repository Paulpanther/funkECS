#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_system = 1,
  aux_sym_system_declaration_token1 = 2,
  anon_sym_LPAREN_RPAREN = 3,
  sym_number = 4,
  sym_operator = 5,
  sym_source_file = 6,
  sym_system_declaration = 7,
  sym_expression = 8,
  sym_primary = 9,
  sym_binary_expression = 10,
  aux_sym_source_file_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_system] = "system",
  [aux_sym_system_declaration_token1] = "system_declaration_token1",
  [anon_sym_LPAREN_RPAREN] = "()",
  [sym_number] = "number",
  [sym_operator] = "operator",
  [sym_source_file] = "source_file",
  [sym_system_declaration] = "system_declaration",
  [sym_expression] = "expression",
  [sym_primary] = "primary",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_system] = anon_sym_system,
  [aux_sym_system_declaration_token1] = aux_sym_system_declaration_token1,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [sym_number] = sym_number,
  [sym_operator] = sym_operator,
  [sym_source_file] = sym_source_file,
  [sym_system_declaration] = sym_system_declaration,
  [sym_expression] = sym_expression,
  [sym_primary] = sym_primary,
  [sym_binary_expression] = sym_binary_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_system_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_system_declaration] = {
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
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
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
      if (eof) ADVANCE(8);
      if (lookahead == '(') ADVANCE(1);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 6:
      if (lookahead == 'y') ADVANCE(4);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_system_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_operator);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [aux_sym_system_declaration_token1] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym_system_declaration] = STATE(2),
    [sym_expression] = STATE(5),
    [sym_primary] = STATE(6),
    [sym_binary_expression] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_system] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
  },
  [2] = {
    [sym_system_declaration] = STATE(3),
    [sym_expression] = STATE(5),
    [sym_primary] = STATE(6),
    [sym_binary_expression] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_system] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
  },
  [3] = {
    [sym_system_declaration] = STATE(3),
    [sym_expression] = STATE(5),
    [sym_primary] = STATE(6),
    [sym_binary_expression] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_system] = ACTIONS(13),
    [sym_number] = ACTIONS(16),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_system,
      sym_number,
      sym_operator,
  [7] = 2,
    ACTIONS(23), 1,
      sym_operator,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      anon_sym_system,
      sym_number,
  [16] = 1,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      anon_sym_system,
      sym_number,
      sym_operator,
  [23] = 3,
    ACTIONS(7), 1,
      sym_number,
    STATE(8), 1,
      sym_expression,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
  [34] = 1,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      anon_sym_system,
      sym_number,
      sym_operator,
  [41] = 1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_system,
      sym_number,
  [47] = 1,
    ACTIONS(31), 1,
      aux_sym_system_declaration_token1,
  [51] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [55] = 1,
    ACTIONS(35), 1,
      anon_sym_LPAREN_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 7,
  [SMALL_STATE(6)] = 16,
  [SMALL_STATE(7)] = 23,
  [SMALL_STATE(8)] = 34,
  [SMALL_STATE(9)] = 41,
  [SMALL_STATE(10)] = 47,
  [SMALL_STATE(11)] = 51,
  [SMALL_STATE(12)] = 55,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
