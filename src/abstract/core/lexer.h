#ifndef LEXER_H
#define LEXER_H

#include <utils/defs.h>


// Will return pointer to the extension part of the <path> or NULL, if it absent
static const char* _getExtension(const char* const path);

byte* extractTextFromFile(const char* const path);

#endif