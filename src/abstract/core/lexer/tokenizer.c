/*

*/


#include <utils/defs.h>
#include "tokenizer.h"


static const byte* _extractSource(FILE* file) {
    fseek(file, 0, SEEK_END);
    u32 size = ftell(file);
    rewind(file);

    byte* buffer = (byte*)malloc(sizeof(byte) * (size + 1));
    memset(buffer, 0, size);
    buffer[size] = '\0';

    u32 bytesRead = (u32)fread(buffer, sizeof(byte), size, file);
    if (bytesRead != size) {
        fprintf_s(stderr, "the number of bytes read does not match the expected number(read: %d, expected: %d)\n",
                  bytesRead, size);
        free(buffer);
        return NULL;
    }

    return buffer;
}


Token* getTokensFromString(const char* str) {
    return NULL;
}

const char* getTokensFromFile(FILE* path) {
    if (!path)
        return NULL;

    return _extractSource(path);
}


