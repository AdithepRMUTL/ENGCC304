#include <stdio.h>

int main() {
    int number, i = 1;

    scanf("%d", &number);

    while (i <= number) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

