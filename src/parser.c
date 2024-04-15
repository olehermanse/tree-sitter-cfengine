#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 6
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  anon_sym_EQ_GT = 9,
  sym_quoted_string = 10,
  sym_identifier = 11,
  sym_promise_guard = 12,
  sym_class_guard = 13,
  sym_comment = 14,
  sym_macro = 15,
  sym_source_file = 16,
  sym__block = 17,
  sym_bundle_block = 18,
  sym_parameter_list = 19,
  sym_bundle_body = 20,
  sym_bundle_section = 21,
  sym_right_value = 22,
  sym_class_guarded_promises = 23,
  sym_promise = 24,
  sym_attribute = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_parameter_list_repeat1 = 27,
  aux_sym_bundle_body_repeat1 = 28,
  aux_sym_bundle_section_repeat1 = 29,
  aux_sym_bundle_section_repeat2 = 30,
  aux_sym_promise_repeat1 = 31,
  alias_sym_attribute_name = 32,
  alias_sym_bundle_name = 33,
  alias_sym_bundle_type = 34,
  alias_sym_parameter = 35,
  alias_sym_promiser = 36,
  alias_sym_stakeholder = 37,
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
  [anon_sym_EQ_GT] = "=>",
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
  [alias_sym_promiser] = "promiser",
  [alias_sym_stakeholder] = "stakeholder",
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
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
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
  [alias_sym_promiser] = alias_sym_promiser,
  [alias_sym_stakeholder] = alias_sym_stakeholder,
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
  [anon_sym_EQ_GT] = {
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
  [alias_sym_promiser] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_stakeholder] = {
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
    [0] = alias_sym_promiser,
    [2] = alias_sym_stakeholder,
  },
  [7] = {
    [0] = alias_sym_attribute_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_right_value, 2,
    sym_right_value,
    alias_sym_stakeholder,
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
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
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
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '`') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == '}') ADVANCE(27);
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
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '}') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(34);
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
      if (lookahead == ':') ADVANCE(35);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(7);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(31);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 20:
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_bundle_keyword);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_promise_guard);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_promise_guard);
      if (lookahead == ':') ADVANCE(35);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_class_guard);
      if (lookahead == ':') ADVANCE(35);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_macro);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
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
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
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
    [anon_sym_EQ_GT] = ACTIONS(1),
    [sym_quoted_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_macro] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(67),
    [sym__block] = STATE(13),
    [sym_bundle_block] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
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
    STATE(12), 2,
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
    STATE(7), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
    STATE(11), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [50] = 5,
    ACTIONS(11), 1,
      sym_quoted_string,
    ACTIONS(23), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(21), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(6), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [69] = 7,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(27), 1,
      anon_sym_DASH_GT,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(37), 1,
      sym_attribute,
    STATE(38), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [92] = 5,
    ACTIONS(11), 1,
      sym_quoted_string,
    ACTIONS(35), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(33), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(7), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [111] = 5,
    ACTIONS(39), 1,
      sym_quoted_string,
    ACTIONS(42), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(37), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(7), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [130] = 4,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      sym_bundle_keyword,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(8), 3,
      sym__block,
      sym_bundle_block,
      aux_sym_source_file_repeat1,
  [146] = 6,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(51), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      aux_sym_promise_repeat1,
    STATE(35), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [166] = 5,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      sym_promise_guard,
    ACTIONS(57), 1,
      sym_class_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(10), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [184] = 5,
    ACTIONS(15), 1,
      sym_class_guard,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(10), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [202] = 5,
    ACTIONS(15), 1,
      sym_class_guard,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(10), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [220] = 4,
    ACTIONS(7), 1,
      sym_bundle_keyword,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(8), 3,
      sym__block,
      sym_bundle_block,
      aux_sym_source_file_repeat1,
  [236] = 4,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(19), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [251] = 3,
    ACTIONS(72), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(70), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [264] = 3,
    ACTIONS(76), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(74), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [277] = 3,
    ACTIONS(80), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(78), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [290] = 3,
    ACTIONS(84), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(82), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [303] = 4,
    ACTIONS(68), 1,
      sym_promise_guard,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(23), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [318] = 3,
    ACTIONS(90), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(88), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [331] = 5,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_parameter_list,
    STATE(55), 1,
      sym_bundle_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [348] = 3,
    ACTIONS(98), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(96), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [361] = 4,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(23), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [376] = 3,
    ACTIONS(107), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(105), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [389] = 3,
    ACTIONS(111), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(109), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [402] = 4,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [416] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(115), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [426] = 4,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [440] = 4,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(121), 1,
      sym_identifier,
    STATE(45), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [454] = 4,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [468] = 4,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [482] = 4,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(127), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [496] = 4,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [510] = 3,
    STATE(9), 1,
      sym_right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(133), 2,
      sym_quoted_string,
      sym_identifier,
  [522] = 4,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [536] = 4,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [550] = 4,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [564] = 4,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [578] = 4,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [592] = 4,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [606] = 4,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(144), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [620] = 3,
    STATE(56), 1,
      sym_right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(133), 2,
      sym_quoted_string,
      sym_identifier,
  [632] = 3,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_bundle_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [643] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [652] = 3,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(52), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [663] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [672] = 3,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [683] = 3,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [694] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [703] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [712] = 3,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [723] = 3,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(52), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [734] = 3,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [745] = 3,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(46), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [756] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [765] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [774] = 2,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [782] = 2,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [790] = 2,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [798] = 2,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [806] = 2,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [814] = 2,
    ACTIONS(183), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [822] = 2,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [830] = 2,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [838] = 2,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [846] = 2,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [854] = 2,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 130,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 166,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 202,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 236,
  [SMALL_STATE(15)] = 251,
  [SMALL_STATE(16)] = 264,
  [SMALL_STATE(17)] = 277,
  [SMALL_STATE(18)] = 290,
  [SMALL_STATE(19)] = 303,
  [SMALL_STATE(20)] = 318,
  [SMALL_STATE(21)] = 331,
  [SMALL_STATE(22)] = 348,
  [SMALL_STATE(23)] = 361,
  [SMALL_STATE(24)] = 376,
  [SMALL_STATE(25)] = 389,
  [SMALL_STATE(26)] = 402,
  [SMALL_STATE(27)] = 416,
  [SMALL_STATE(28)] = 426,
  [SMALL_STATE(29)] = 440,
  [SMALL_STATE(30)] = 454,
  [SMALL_STATE(31)] = 468,
  [SMALL_STATE(32)] = 482,
  [SMALL_STATE(33)] = 496,
  [SMALL_STATE(34)] = 510,
  [SMALL_STATE(35)] = 522,
  [SMALL_STATE(36)] = 536,
  [SMALL_STATE(37)] = 550,
  [SMALL_STATE(38)] = 564,
  [SMALL_STATE(39)] = 578,
  [SMALL_STATE(40)] = 592,
  [SMALL_STATE(41)] = 606,
  [SMALL_STATE(42)] = 620,
  [SMALL_STATE(43)] = 632,
  [SMALL_STATE(44)] = 643,
  [SMALL_STATE(45)] = 652,
  [SMALL_STATE(46)] = 663,
  [SMALL_STATE(47)] = 672,
  [SMALL_STATE(48)] = 683,
  [SMALL_STATE(49)] = 694,
  [SMALL_STATE(50)] = 703,
  [SMALL_STATE(51)] = 712,
  [SMALL_STATE(52)] = 723,
  [SMALL_STATE(53)] = 734,
  [SMALL_STATE(54)] = 745,
  [SMALL_STATE(55)] = 756,
  [SMALL_STATE(56)] = 765,
  [SMALL_STATE(57)] = 774,
  [SMALL_STATE(58)] = 782,
  [SMALL_STATE(59)] = 790,
  [SMALL_STATE(60)] = 798,
  [SMALL_STATE(61)] = 806,
  [SMALL_STATE(62)] = 814,
  [SMALL_STATE(63)] = 822,
  [SMALL_STATE(64)] = 830,
  [SMALL_STATE(65)] = 838,
  [SMALL_STATE(66)] = 846,
  [SMALL_STATE(67)] = 854,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_guarded_promises, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_guarded_promises, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_guarded_promises, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_guarded_promises, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat1, 2), SHIFT_REPEAT(5),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_section_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat2, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_section_repeat2, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat2, 2), SHIFT_REPEAT(4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 4, .production_id = 5),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 4, .production_id = 5),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 4, .production_id = 6),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 4, .production_id = 6),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 3, .production_id = 5),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 3, .production_id = 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 7, .production_id = 6),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 7, .production_id = 6),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 5, .production_id = 6),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 5, .production_id = 6),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 2, .production_id = 5),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 2, .production_id = 5),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2), SHIFT_REPEAT(2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 5, .production_id = 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 5, .production_id = 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 6, .production_id = 6),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 6, .production_id = 6),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_value, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_promise_repeat1, 2), SHIFT_REPEAT(54),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_promise_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_block, 5, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(64),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_block, 4, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 7),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, .production_id = 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5, .production_id = 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, .production_id = 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, .production_id = 3),
  [193] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
