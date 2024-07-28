#ifndef ABSTR_TOKENIZER_H
#define ABSTR_TOKENIZER_H

#include <core/lexer/state.h>
#include <utils/includes.h>


Token* getTokensFromString(const char* str);
const char* getTokensFromFile(FILE* path);


#endif