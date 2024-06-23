#include  "includes.h"


typedef vector<char> vc;

int runCode(const char code[]) {
    printf("Code: %s", code);
    return 0;
}

int runFile(char path[]) {
    ifstream f(path);

    vc codev;
    string sa;

    if (f.is_open()) {
        while (getline(f, sa)) {
            const char *saa = sa.c_str();
            for (int i = 0; i < sa.size(); i++)
                codev.push_back(saa[i]);
            codev.push_back('\n');
        }
    }
    f.close();

    char* code = &codev[0];
    return runCode(code);
}