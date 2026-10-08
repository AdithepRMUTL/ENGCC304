#include <stdio.h>
#include <string.h>

int main() {

    char word[200];
    int i;

    scanf("%s", word);

    for (i = (int)strlen(word) - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }

    return 0;
}