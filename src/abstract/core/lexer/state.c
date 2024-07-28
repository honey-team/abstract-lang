#include "state.h"
#include <utils/includes.h>


Token* newToken(enum TokenNames tok, const char* val) {
    Token* t = (Token*)malloc(sizeof(Token));

    t->tok = tok;
    t->val = val;
    return t;
}
