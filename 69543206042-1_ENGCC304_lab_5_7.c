#include <stdio.h>

int main() {
    int i , number, max;

    scanf("%d", &max);

    for (i = 2; i <= 5; i++) {
        scanf("%d", &number);
        if (number > max) {
            max = number;
        }   
    }

    printf("Max = %d\n", max);

    return 0;
}