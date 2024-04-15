#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 6
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

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
  sym_qualified_identifier = 12,
  sym_promise_guard = 13,
  sym_class_guard = 14,
  sym_comment = 15,
  sym_macro = 16,
  sym_source_file = 17,
  sym__block = 18,
  sym_bundle_block = 19,
  sym_parameter_list = 20,
  sym_bundle_body = 21,
  sym_bundle_section = 22,
  sym__right_value = 23,
  sym_call = 24,
  sym_list = 25,
  sym__value_list = 26,
  sym_class_guarded_promises = 27,
  sym_promise = 28,
  sym_attribute = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_parameter_list_repeat1 = 31,
  aux_sym_bundle_body_repeat1 = 32,
  aux_sym_bundle_section_repeat1 = 33,
  aux_sym_bundle_section_repeat2 = 34,
  aux_sym__value_list_repeat1 = 35,
  aux_sym_promise_repeat1 = 36,
  alias_sym_attribute_name = 37,
  alias_sym_bundle_name = 38,
  alias_sym_bundle_type = 39,
  alias_sym_calling_identifier = 40,
  alias_sym_promiser = 41,
  alias_sym_stakeholder = 42,
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
  [sym_identifier] = "parameter",
  [sym_qualified_identifier] = "qualified_identifier",
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
  [sym__right_value] = "_right_value",
  [sym_call] = "call",
  [sym_list] = "list",
  [sym__value_list] = "_value_list",
  [sym_class_guarded_promises] = "class_guarded_promises",
  [sym_promise] = "promise",
  [sym_attribute] = "attribute",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_bundle_body_repeat1] = "bundle_body_repeat1",
  [aux_sym_bundle_section_repeat1] = "bundle_section_repeat1",
  [aux_sym_bundle_section_repeat2] = "bundle_section_repeat2",
  [aux_sym__value_list_repeat1] = "_value_list_repeat1",
  [aux_sym_promise_repeat1] = "promise_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_bundle_name] = "bundle_name",
  [alias_sym_bundle_type] = "bundle_type",
  [alias_sym_calling_identifier] = "calling_identifier",
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
  [sym_qualified_identifier] = sym_qualified_identifier,
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
  [sym__right_value] = sym__right_value,
  [sym_call] = sym_call,
  [sym_list] = sym_list,
  [sym__value_list] = sym__value_list,
  [sym_class_guarded_promises] = sym_class_guarded_promises,
  [sym_promise] = sym_promise,
  [sym_attribute] = sym_attribute,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_bundle_body_repeat1] = aux_sym_bundle_body_repeat1,
  [aux_sym_bundle_section_repeat1] = aux_sym_bundle_section_repeat1,
  [aux_sym_bundle_section_repeat2] = aux_sym_bundle_section_repeat2,
  [aux_sym__value_list_repeat1] = aux_sym__value_list_repeat1,
  [aux_sym_promise_repeat1] = aux_sym_promise_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_bundle_name] = alias_sym_bundle_name,
  [alias_sym_bundle_type] = alias_sym_bundle_type,
  [alias_sym_calling_identifier] = alias_sym_calling_identifier,
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
  [sym_qualified_identifier] = {
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
  [sym__right_value] = {
    .visible = false,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__value_list] = {
    .visible = false,
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
  [aux_sym__value_list_repeat1] = {
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
  [alias_sym_calling_identifier] = {
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
    [0] = alias_sym_promiser,
  },
  [3] = {
    [0] = alias_sym_promiser,
    [2] = alias_sym_stakeholder,
  },
  [4] = {
    [0] = alias_sym_attribute_name,
  },
  [5] = {
    [0] = alias_sym_calling_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__right_value, 2,
    sym__right_value,
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
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
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
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '!' ||
          ('&' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '|') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '|') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(41);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(8);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == '`') ADVANCE(34);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 23:
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_bundle_keyword);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_promise_guard);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_promise_guard);
      if (lookahead == ':') ADVANCE(41);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(10);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_class_guard);
      if (lookahead == ':') ADVANCE(41);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(10);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_macro);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 0},
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
    [sym_source_file] = STATE(82),
    [sym__block] = STATE(26),
    [sym_bundle_block] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_bundle_keyword] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_macro] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_quoted_string,
    ACTIONS(15), 1,
      sym_qualified_identifier,
    STATE(46), 1,
      sym__right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(9), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    STATE(16), 2,
      sym_call,
      sym_list,
  [25] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_quoted_string,
    ACTIONS(15), 1,
      sym_qualified_identifier,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym__right_value,
    STATE(79), 1,
      sym__value_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(16), 2,
      sym_call,
      sym_list,
  [52] = 7,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      sym_quoted_string,
    ACTIONS(23), 1,
      sym_promise_guard,
    ACTIONS(25), 1,
      sym_class_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(11), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
    STATE(24), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [77] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_quoted_string,
    ACTIONS(15), 1,
      sym_qualified_identifier,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__right_value,
    STATE(77), 1,
      sym__value_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(16), 2,
      sym_call,
      sym_list,
  [104] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_quoted_string,
    ACTIONS(15), 1,
      sym_qualified_identifier,
    STATE(46), 1,
      sym__right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(29), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    STATE(16), 2,
      sym_call,
      sym_list,
  [129] = 7,
    ACTIONS(21), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      sym_class_guard,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(4), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
    STATE(25), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [154] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_quoted_string,
    ACTIONS(15), 1,
      sym_qualified_identifier,
    STATE(46), 1,
      sym__right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(16), 2,
      sym_call,
      sym_list,
  [175] = 5,
    ACTIONS(21), 1,
      sym_quoted_string,
    ACTIONS(37), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(35), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(12), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [194] = 7,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    ACTIONS(41), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(47), 1,
      aux_sym_promise_repeat1,
    STATE(48), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [217] = 5,
    ACTIONS(49), 1,
      sym_quoted_string,
    ACTIONS(52), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(47), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(11), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [236] = 5,
    ACTIONS(21), 1,
      sym_quoted_string,
    ACTIONS(56), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(54), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(11), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [255] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_quoted_string,
    ACTIONS(15), 1,
      sym_qualified_identifier,
    STATE(62), 1,
      sym__right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(16), 2,
      sym_call,
      sym_list,
  [276] = 3,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(60), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_identifier,
  [291] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_quoted_string,
    ACTIONS(15), 1,
      sym_qualified_identifier,
    STATE(18), 1,
      sym__right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(16), 2,
      sym_call,
      sym_list,
  [312] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(60), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_identifier,
  [324] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(62), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_identifier,
  [336] = 6,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    ACTIONS(66), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_attribute,
    STATE(55), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [356] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(68), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_identifier,
  [368] = 5,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      sym_promise_guard,
    ACTIONS(74), 1,
      sym_class_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(20), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [386] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(77), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_identifier,
  [398] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(79), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_identifier,
  [410] = 4,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      sym_bundle_keyword,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(23), 3,
      sym__block,
      sym_bundle_block,
      aux_sym_source_file_repeat1,
  [426] = 5,
    ACTIONS(25), 1,
      sym_class_guard,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(20), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [444] = 5,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      sym_promise_guard,
    ACTIONS(25), 1,
      sym_class_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(20), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [462] = 4,
    ACTIONS(7), 1,
      sym_bundle_keyword,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(23), 3,
      sym__block,
      sym_bundle_block,
      aux_sym_source_file_repeat1,
  [478] = 4,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym__value_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(95), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [493] = 4,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(28), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [508] = 4,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym__value_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(104), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [523] = 3,
    ACTIONS(108), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(106), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [536] = 3,
    ACTIONS(112), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(110), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [549] = 3,
    ACTIONS(116), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(114), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [562] = 4,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym__value_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(9), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [577] = 3,
    ACTIONS(122), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(120), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [590] = 4,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(28), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [605] = 3,
    ACTIONS(130), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(128), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [618] = 3,
    ACTIONS(134), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(132), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [631] = 3,
    ACTIONS(138), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(136), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [644] = 4,
    ACTIONS(126), 1,
      sym_promise_guard,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(35), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [659] = 5,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_parameter_list,
    STATE(66), 1,
      sym_bundle_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [676] = 3,
    ACTIONS(148), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(146), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [689] = 4,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [703] = 4,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [717] = 4,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [731] = 4,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(69), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [745] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(95), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [755] = 4,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [769] = 4,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [783] = 4,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [797] = 4,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [811] = 4,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [825] = 4,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [839] = 4,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [853] = 4,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [867] = 4,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [881] = 4,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [895] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [904] = 3,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [915] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [924] = 3,
    ACTIONS(187), 1,
      sym_identifier,
    STATE(60), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [935] = 3,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [946] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [955] = 3,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [966] = 3,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_bundle_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [977] = 3,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(70), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [988] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [997] = 3,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1008] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [1017] = 3,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(60), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1028] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1037] = 2,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1045] = 2,
    ACTIONS(208), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1053] = 2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1061] = 2,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1069] = 2,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1077] = 2,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1085] = 2,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1093] = 2,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1101] = 2,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1109] = 2,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1117] = 2,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1125] = 2,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 154,
  [SMALL_STATE(9)] = 175,
  [SMALL_STATE(10)] = 194,
  [SMALL_STATE(11)] = 217,
  [SMALL_STATE(12)] = 236,
  [SMALL_STATE(13)] = 255,
  [SMALL_STATE(14)] = 276,
  [SMALL_STATE(15)] = 291,
  [SMALL_STATE(16)] = 312,
  [SMALL_STATE(17)] = 324,
  [SMALL_STATE(18)] = 336,
  [SMALL_STATE(19)] = 356,
  [SMALL_STATE(20)] = 368,
  [SMALL_STATE(21)] = 386,
  [SMALL_STATE(22)] = 398,
  [SMALL_STATE(23)] = 410,
  [SMALL_STATE(24)] = 426,
  [SMALL_STATE(25)] = 444,
  [SMALL_STATE(26)] = 462,
  [SMALL_STATE(27)] = 478,
  [SMALL_STATE(28)] = 493,
  [SMALL_STATE(29)] = 508,
  [SMALL_STATE(30)] = 523,
  [SMALL_STATE(31)] = 536,
  [SMALL_STATE(32)] = 549,
  [SMALL_STATE(33)] = 562,
  [SMALL_STATE(34)] = 577,
  [SMALL_STATE(35)] = 590,
  [SMALL_STATE(36)] = 605,
  [SMALL_STATE(37)] = 618,
  [SMALL_STATE(38)] = 631,
  [SMALL_STATE(39)] = 644,
  [SMALL_STATE(40)] = 659,
  [SMALL_STATE(41)] = 676,
  [SMALL_STATE(42)] = 689,
  [SMALL_STATE(43)] = 703,
  [SMALL_STATE(44)] = 717,
  [SMALL_STATE(45)] = 731,
  [SMALL_STATE(46)] = 745,
  [SMALL_STATE(47)] = 755,
  [SMALL_STATE(48)] = 769,
  [SMALL_STATE(49)] = 783,
  [SMALL_STATE(50)] = 797,
  [SMALL_STATE(51)] = 811,
  [SMALL_STATE(52)] = 825,
  [SMALL_STATE(53)] = 839,
  [SMALL_STATE(54)] = 853,
  [SMALL_STATE(55)] = 867,
  [SMALL_STATE(56)] = 881,
  [SMALL_STATE(57)] = 895,
  [SMALL_STATE(58)] = 904,
  [SMALL_STATE(59)] = 915,
  [SMALL_STATE(60)] = 924,
  [SMALL_STATE(61)] = 935,
  [SMALL_STATE(62)] = 946,
  [SMALL_STATE(63)] = 955,
  [SMALL_STATE(64)] = 966,
  [SMALL_STATE(65)] = 977,
  [SMALL_STATE(66)] = 988,
  [SMALL_STATE(67)] = 997,
  [SMALL_STATE(68)] = 1008,
  [SMALL_STATE(69)] = 1017,
  [SMALL_STATE(70)] = 1028,
  [SMALL_STATE(71)] = 1037,
  [SMALL_STATE(72)] = 1045,
  [SMALL_STATE(73)] = 1053,
  [SMALL_STATE(74)] = 1061,
  [SMALL_STATE(75)] = 1069,
  [SMALL_STATE(76)] = 1077,
  [SMALL_STATE(77)] = 1085,
  [SMALL_STATE(78)] = 1093,
  [SMALL_STATE(79)] = 1101,
  [SMALL_STATE(80)] = 1109,
  [SMALL_STATE(81)] = 1117,
  [SMALL_STATE(82)] = 1125,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_list, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_list, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_guarded_promises, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_guarded_promises, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat1, 2), SHIFT_REPEAT(10),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_section_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_guarded_promises, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_guarded_promises, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__right_value, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 5),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat2, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_section_repeat2, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat2, 2), SHIFT_REPEAT(9),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_list_repeat1, 2), SHIFT_REPEAT(8),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_list_repeat1, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2), SHIFT_REPEAT(7),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_list, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 4, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 4, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 7, .production_id = 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 7, .production_id = 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 4, .production_id = 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 4, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 2, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 2, .production_id = 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 5, .production_id = 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 5, .production_id = 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 5, .production_id = 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 5, .production_id = 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 3, .production_id = 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 3, .production_id = 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 6, .production_id = 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 6, .production_id = 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_promise_repeat1, 2), SHIFT_REPEAT(65),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_promise_repeat1, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 3),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(71),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_block, 4, .production_id = 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_block, 5, .production_id = 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [226] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
