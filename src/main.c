#include <core/config.h>
#include <core/lexer.h>
#include <utils/includes.h>


int printVersion() {
    printf_s("Abstract version: %s\n", ABSTR_VERSION);
    return 0;
}

int checkArgumentsCount(int argc) {
    if (argc > 2) {
        printf_s("Error: you defined too much arguments.\n\n");
        return 1;
    }
    return 0;
}

int main(int argc, char** argv) {
    // if (argc == 1) 
    //     return printVersion();
// 
    // if (checkArgumentsCount(argc))
    //     return EXIT_FAILURE;

    char* path = "some.abstr";
    char* src = extractTextFromFile(path);

    if (src != NULL)
        printf_s("\"%s\"\n", src);

    return EXIT_SUCCESS;
}