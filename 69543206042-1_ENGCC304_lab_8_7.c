#include <stdio.h>

int main() {
    int i, num, max;

    scanf("%d", &max);

    for (i = 2; i <= 3; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }

    printf("Max = %d\n", max);

    return 0;
}