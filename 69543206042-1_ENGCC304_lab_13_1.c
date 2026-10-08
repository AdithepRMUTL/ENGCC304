#include <stdio.h>

int main() {

    int number;
    int *p;

    p = &number;
    scanf("%d", &number);

    printf("Value = %d\n", *p);

    return 0;
}