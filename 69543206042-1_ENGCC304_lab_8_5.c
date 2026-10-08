#include <stdio.h>

int main() {
    int number, sum = 0;
    int count = 1;

    scanf("%d", &number);

    while (count <= number) {
        sum += count;
        count++;
    }

    printf("Sum = %d\n", sum);
    return 0;
}