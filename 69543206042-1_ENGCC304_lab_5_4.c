#include <stdio.h>

int main() {
    int number , i , sum = 0;

    for(i = 1; i <= 5; i++) {
        scanf("%d", &number);
        sum = sum + number;
    }

    printf("Sum = %d\n", sum);

    return 0;
}