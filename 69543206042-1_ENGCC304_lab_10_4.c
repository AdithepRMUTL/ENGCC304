#include <stdio.h>

int main() {

    int a , b , temp;

    scanf("%d %d", &a, &b);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    printf("Small = %d\n", a);
    printf("Large = %d\n", b);

    return 0;
}   