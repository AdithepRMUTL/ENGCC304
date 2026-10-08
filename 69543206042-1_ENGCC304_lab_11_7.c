#include <stdio.h>
#include <string.h>

int main() {

    char text_1[200];
    int len;

    fgets(text_1, sizeof(text_1), stdin);
    len = (int)strlen(text_1);

    if (len > 0 && text_1[len - 1] == '\n') {
        len--;
    }

    printf("Length = %d\n", len);

    return 0;
}