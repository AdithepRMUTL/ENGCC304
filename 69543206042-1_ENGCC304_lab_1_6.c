#include <stdio.h>

int main() {
    char source[30], compiler[30] , program[30];

    scanf("%s %s %s", source, compiler, program);

    printf("Source Code: %s\n", source);
    printf("Compiler: %s\n", compiler);
    printf("Program: %s\n", program);
    return 0;
}