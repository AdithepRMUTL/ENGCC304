#include <stdio.h>

int main() {
    int number , sum = 0 , i = 1;

    scanf("%d", &number);

    while (i <= number) {
        sum += i;
        i++;  
    }

    printf("Sum = %d\n", sum);

    return 0;
}