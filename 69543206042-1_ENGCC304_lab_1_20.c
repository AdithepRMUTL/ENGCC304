#include <stdio.h>

int main(){
    char language[50];
    char compiler[50];
    char outputprogram[50];

    scanf("%s", language);
    scanf("%s", compiler);
    scanf("%s", outputprogram);

    printf("Language: %s\n", language);
    printf("Compiler: %s\n", compiler);
    printf("Output Program: %s\n", outputprogram);

    return 0;
}