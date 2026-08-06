#include <stdio.h>

int main() {

    int n , i , column ;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for (column = 1; column <= n; column++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}