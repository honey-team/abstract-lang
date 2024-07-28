#ifndef ABSTR_TOKENS_H
#define ABSTR_TOKENS_H

#include <utils/includes.h>


enum TokenNames {
    UNKNOWN,
    EQUAL,
    PLUS,
    MINUS,
    COMMA,
    WHITESPACE,
    NUMBER,
    STRING,
    LPAR,
    RPAR,
    IDENTIFIER,
};

typedef struct {
    enum TokenNames tok;
    const char* val;
} Token;


inline const char* getPatternForToken(enum TokenNames tok) {
    switch (tok) {
        case EQUAL:
            return "\\=";
        case PLUS:
            return "\\+";
        case MINUS:
            return "\\-";
        case COMMA:
            return ",";
        case WHITESPACE:
            return "[ \\t]+";
        case NUMBER:
            return "-?\\d+[\\.\\d]?";
        case STRING:
            return "\".*\"";
        case LPAR:
            return "\\(";
        case RPAR:
            return "\\)";
        case IDENTIFIER:
            return "[^\\s]\\w+[\\d+]?";
    }

    return NULL;    // UNKNOWN
}


#endif