#include <stdio.h>
#include <string.h>

int main() {
    
    char word[150];
    int len;

    scanf("%s", word);
    len = (int)strlen(word);

    printf("First = %c\n", word[0]);
    printf("Last = %c\n", word[len - 1]);

    return 0;
}