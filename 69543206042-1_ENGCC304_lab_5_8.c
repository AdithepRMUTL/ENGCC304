#include <stdio.h>

int main() {

    int i , number ;

    scanf("%d", &number);

    for (i = 1; i <= 5; i++) {
        printf("%d x %d = %d\n" , number , i , number * i);
    }

    return 0;
}