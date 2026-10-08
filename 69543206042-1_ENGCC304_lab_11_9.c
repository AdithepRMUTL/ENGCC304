#include <stdio.h>

int main() {
    int table1[2][2];

    int i, j, sum = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &table1[i][j]);
            sum = sum + table1[i][j];
        }
    }

    printf("Sum = %d", sum);
    
    return 0;
}