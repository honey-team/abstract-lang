#include <core/config.h>
#include <core/lexer/tokenizer.h>
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
     if (argc == 1)
         return printVersion();

     if (checkArgumentsCount(argc))
         return EXIT_FAILURE;

     FILE* file;
     if (fopen_s(&file, argv[1], "rb"))
         return EXIT_FAILURE;

    printf_s("%s\n", getTokensFromFile(file));

    return EXIT_SUCCESS;
}