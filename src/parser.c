#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 6
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  sym_bundle_keyword = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_SEMI = 8,
  sym_quoted_string = 9,
  sym_identifier = 10,
  sym_promise_guard = 11,
  sym_class_guard = 12,
  sym_comment = 13,
  sym_macro = 14,
  sym_source_file = 15,
  sym__block = 16,
  sym_bundle_block = 17,
  sym_parameter_list = 18,
  sym_bundle_body = 19,
  sym_bundle_section = 20,
  sym_right_value = 21,
  sym_class_guarded_promises = 22,
  sym_promise = 23,
  sym_attribute = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_parameter_list_repeat1 = 26,
  aux_sym_bundle_body_repeat1 = 27,
  aux_sym_bundle_section_repeat1 = 28,
  aux_sym_bundle_section_repeat2 = 29,
  aux_sym_promise_repeat1 = 30,
  alias_sym_attribute_name = 31,
  alias_sym_bundle_name = 32,
  alias_sym_bundle_type = 33,
  alias_sym_parameter = 34,
  alias_sym_promisee = 35,
  alias_sym_promiser = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_bundle_keyword] = "bundle_keyword",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_SEMI] = ";",
  [sym_quoted_string] = "quoted_string",
  [sym_identifier] = "identifier",
  [sym_promise_guard] = "promise_guard",
  [sym_class_guard] = "class_guard",
  [sym_comment] = "comment",
  [sym_macro] = "macro",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym_bundle_block] = "bundle_block",
  [sym_parameter_list] = "parameter_list",
  [sym_bundle_body] = "bundle_body",
  [sym_bundle_section] = "bundle_section",
  [sym_right_value] = "right_value",
  [sym_class_guarded_promises] = "class_guarded_promises",
  [sym_promise] = "promise",
  [sym_attribute] = "attribute",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_bundle_body_repeat1] = "bundle_body_repeat1",
  [aux_sym_bundle_section_repeat1] = "bundle_section_repeat1",
  [aux_sym_bundle_section_repeat2] = "bundle_section_repeat2",
  [aux_sym_promise_repeat1] = "promise_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_bundle_name] = "bundle_name",
  [alias_sym_bundle_type] = "bundle_type",
  [alias_sym_parameter] = "parameter",
  [alias_sym_promisee] = "promisee",
  [alias_sym_promiser] = "promiser",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_bundle_keyword] = sym_bundle_keyword,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_quoted_string] = sym_quoted_string,
  [sym_identifier] = sym_identifier,
  [sym_promise_guard] = sym_promise_guard,
  [sym_class_guard] = sym_class_guard,
  [sym_comment] = sym_comment,
  [sym_macro] = sym_macro,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym_bundle_block] = sym_bundle_block,
  [sym_parameter_list] = sym_parameter_list,
  [sym_bundle_body] = sym_bundle_body,
  [sym_bundle_section] = sym_bundle_section,
  [sym_right_value] = sym_right_value,
  [sym_class_guarded_promises] = sym_class_guarded_promises,
  [sym_promise] = sym_promise,
  [sym_attribute] = sym_attribute,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_bundle_body_repeat1] = aux_sym_bundle_body_repeat1,
  [aux_sym_bundle_section_repeat1] = aux_sym_bundle_section_repeat1,
  [aux_sym_bundle_section_repeat2] = aux_sym_bundle_section_repeat2,
  [aux_sym_promise_repeat1] = aux_sym_promise_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_bundle_name] = alias_sym_bundle_name,
  [alias_sym_bundle_type] = alias_sym_bundle_type,
  [alias_sym_parameter] = alias_sym_parameter,
  [alias_sym_promisee] = alias_sym_promisee,
  [alias_sym_promiser] = alias_sym_promiser,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_bundle_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_promise_guard] = {
    .visible = true,
    .named = true,
  },
  [sym_class_guard] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_bundle_block] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_bundle_body] = {
    .visible = true,
    .named = true,
  },
  [sym_bundle_section] = {
    .visible = true,
    .named = true,
  },
  [sym_right_value] = {
    .visible = true,
    .named = true,
  },
  [sym_class_guarded_promises] = {
    .visible = true,
    .named = true,
  },
  [sym_promise] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bundle_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bundle_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bundle_section_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_promise_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bundle_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bundle_type] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_promisee] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_promiser] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_bundle_type,
    [2] = alias_sym_bundle_name,
  },
  [2] = {
    [0] = alias_sym_parameter,
  },
  [3] = {
    [1] = alias_sym_parameter,
  },
  [4] = {
    [2] = alias_sym_parameter,
  },
  [5] = {
    [0] = alias_sym_promiser,
  },
  [6] = {
    [0] = alias_sym_attribute_name,
  },
  [7] = {
    [0] = alias_sym_promiser,
    [2] = alias_sym_promisee,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_right_value, 2,
    sym_right_value,
    alias_sym_promisee,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
};

static inline bool sym_class_guard_character_set_1(int32_t c) {
  return (c < '0'
    ? (c < '&'
      ? (c < ' '
        ? c == '\t'
        : c <= '!')
      : (c <= '&' || (c < '.'
        ? (c >= '(' && c <= ')')
        : c <= '.')))
    : (c <= '9' || (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '|'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '`') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '!' ||
          ('&' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '|') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '|') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(33);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(7);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == '`') ADVANCE(29);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 19:
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_bundle_keyword);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_promise_guard);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_promise_guard);
      if (lookahead == ':') ADVANCE(33);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_class_guard);
      if (lookahead == ':') ADVANCE(33);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_macro);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_bundle_keyword] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_quoted_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_macro] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym__block] = STATE(9),
    [sym_bundle_block] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_bundle_keyword] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_macro] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      sym_quoted_string,
    ACTIONS(13), 1,
      sym_promise_guard,
    ACTIONS(15), 1,
      sym_class_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(3), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
    STATE(11), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [25] = 7,
    ACTIONS(11), 1,
      sym_quoted_string,
    ACTIONS(15), 1,
      sym_class_guard,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(4), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
    STATE(8), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [50] = 5,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(26), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(21), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(4), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [69] = 5,
    ACTIONS(11), 1,
      sym_quoted_string,
    ACTIONS(30), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(28), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(4), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [88] = 5,
    ACTIONS(11), 1,
      sym_quoted_string,
    ACTIONS(34), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(32), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(5), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [107] = 5,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    ACTIONS(38), 1,
      sym_promise_guard,
    ACTIONS(40), 1,
      sym_class_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(7), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [125] = 5,
    ACTIONS(15), 1,
      sym_class_guard,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(7), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [143] = 4,
    ACTIONS(7), 1,
      sym_bundle_keyword,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(10), 3,
      sym__block,
      sym_bundle_block,
      aux_sym_source_file_repeat1,
  [159] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_bundle_keyword,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(10), 3,
      sym__block,
      sym_bundle_block,
      aux_sym_source_file_repeat1,
  [175] = 5,
    ACTIONS(15), 1,
      sym_class_guard,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(7), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [193] = 5,
    ACTIONS(54), 1,
      anon_sym_DASH_GT,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(13), 2,
      sym_attribute,
      aux_sym_promise_repeat1,
  [211] = 4,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(24), 2,
      sym_attribute,
      aux_sym_promise_repeat1,
  [226] = 4,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(14), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [241] = 4,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(21), 2,
      sym_attribute,
      aux_sym_promise_repeat1,
  [256] = 5,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_parameter_list,
    STATE(34), 1,
      sym_bundle_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [273] = 4,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(14), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [288] = 4,
    ACTIONS(75), 1,
      sym_promise_guard,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(17), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [303] = 3,
    ACTIONS(81), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(79), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [316] = 3,
    ACTIONS(85), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(83), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [329] = 4,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(24), 2,
      sym_attribute,
      aux_sym_promise_repeat1,
  [344] = 3,
    ACTIONS(91), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(89), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [357] = 3,
    ACTIONS(95), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(93), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [370] = 4,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(24), 2,
      sym_attribute,
      aux_sym_promise_repeat1,
  [385] = 4,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(29), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [399] = 3,
    STATE(33), 1,
      sym_right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(106), 2,
      sym_quoted_string,
      sym_identifier,
  [411] = 3,
    STATE(15), 1,
      sym_right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(106), 2,
      sym_quoted_string,
      sym_identifier,
  [423] = 3,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_bundle_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [434] = 3,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [445] = 3,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [456] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [465] = 3,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [476] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(120), 2,
      anon_sym_SEMI,
      sym_identifier,
  [485] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [494] = 3,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [505] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [516] = 3,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [527] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [536] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(135), 2,
      anon_sym_SEMI,
      sym_identifier,
  [545] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [554] = 2,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [562] = 2,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [570] = 2,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [578] = 2,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [586] = 2,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [594] = 2,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [602] = 2,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [610] = 2,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [618] = 2,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [626] = 2,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 125,
  [SMALL_STATE(9)] = 143,
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 193,
  [SMALL_STATE(13)] = 211,
  [SMALL_STATE(14)] = 226,
  [SMALL_STATE(15)] = 241,
  [SMALL_STATE(16)] = 256,
  [SMALL_STATE(17)] = 273,
  [SMALL_STATE(18)] = 288,
  [SMALL_STATE(19)] = 303,
  [SMALL_STATE(20)] = 316,
  [SMALL_STATE(21)] = 329,
  [SMALL_STATE(22)] = 344,
  [SMALL_STATE(23)] = 357,
  [SMALL_STATE(24)] = 370,
  [SMALL_STATE(25)] = 385,
  [SMALL_STATE(26)] = 399,
  [SMALL_STATE(27)] = 411,
  [SMALL_STATE(28)] = 423,
  [SMALL_STATE(29)] = 434,
  [SMALL_STATE(30)] = 445,
  [SMALL_STATE(31)] = 456,
  [SMALL_STATE(32)] = 465,
  [SMALL_STATE(33)] = 476,
  [SMALL_STATE(34)] = 485,
  [SMALL_STATE(35)] = 494,
  [SMALL_STATE(36)] = 505,
  [SMALL_STATE(37)] = 516,
  [SMALL_STATE(38)] = 527,
  [SMALL_STATE(39)] = 536,
  [SMALL_STATE(40)] = 545,
  [SMALL_STATE(41)] = 554,
  [SMALL_STATE(42)] = 562,
  [SMALL_STATE(43)] = 570,
  [SMALL_STATE(44)] = 578,
  [SMALL_STATE(45)] = 586,
  [SMALL_STATE(46)] = 594,
  [SMALL_STATE(47)] = 602,
  [SMALL_STATE(48)] = 610,
  [SMALL_STATE(49)] = 618,
  [SMALL_STATE(50)] = 626,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat1, 2), SHIFT_REPEAT(12),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_section_repeat1, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_guarded_promises, 2),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_guarded_promises, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_guarded_promises, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_guarded_promises, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat2, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_section_repeat2, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat2, 2), SHIFT_REPEAT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2), SHIFT_REPEAT(2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 5, .production_id = 7),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 5, .production_id = 7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 2, .production_id = 5),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 2, .production_id = 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 4, .production_id = 7),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 4, .production_id = 7),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 3, .production_id = 5),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 3, .production_id = 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_promise_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_promise_repeat1, 2), SHIFT_REPEAT(26),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, .production_id = 6),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_block, 4, .production_id = 1),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(41),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_block, 5, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_value, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5, .production_id = 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, .production_id = 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, .production_id = 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, .production_id = 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cfengine() {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
