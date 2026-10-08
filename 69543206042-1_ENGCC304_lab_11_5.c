#include <stdio.h>
#include <string.h>

int main() {

    char word1[200];
    int i , count = 0;

    scanf("%s", word1);

    for (i = 0; i < strlen(word1); i++) {
        if (word1[i] == 'a'){
            count++;
        }
    }

    printf("Count = %d", count);

    return 0;
}