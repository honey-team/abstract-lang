#include <cstdio>

#include "Config.h"
#include "abstract/main.h"

int printVersion() {
    printf("Abstract version: %s\n", version);
    return 0;
}

int checkForExceptions(char *argv[]) {
    if (argv[2] != nullptr) {
        printf("Error: you defined very much arguments.\n\n");
        return -1;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    // Get version
    if (argv[1] == nullptr) return printVersion();

    // Exceptions
    int exccode = checkForExceptions(argv);
    if (exccode != 0) return exccode;

    // Other
    return runFile(argv[1]);
}