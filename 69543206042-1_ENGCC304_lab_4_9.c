#include <stdio.h>

int main() {
    char string;

    scanf("%c", &string);

    switch (string) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant\n");
    }

    return 0;
}