#include <stdio.h>
#include <string.h>

int main() {
    char word[100];

    scanf("%s", word);

    printf("Length = %lu\n", strlen(word));

    return 0;
}