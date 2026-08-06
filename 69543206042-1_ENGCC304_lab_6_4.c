#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    while (number <= 0) {
        scanf("%d", &number);
    }

    printf("Accepted = %d\n", number);

    return 0;
}