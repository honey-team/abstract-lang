#include <utils/includes.h>
#include "lexer.h"
#include "config.h"


static const char* _getExtension(const char* const path) {
    const char* d = strchr(path, '.');

    return (!d || d == path) ? NULL : d + 1;
}


char* extractTextFromFile(const char* const path) {
    if (strcmp(_getExtension(path), "abstr") != 0) {
        fprintf_s(stdout, "Unknown file format\n");
        return NULL;
    }
    
    FILE* file = NULL;
    if (fopen_s(&file, path, "rb")) {
        fprintf_s(stderr, "Failed to open file %s\n", path);
        return NULL;
    }

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
        return NULL;
    }

    return buffer;
}