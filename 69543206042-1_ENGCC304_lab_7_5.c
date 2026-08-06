#include <stdio.h>

int main() {
    int i , number , sum = 0;

    scanf("%d", &number);

    for(i = 1; i <= number; i++) {
        if(i % 2 == 0) {
            sum += i;
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}