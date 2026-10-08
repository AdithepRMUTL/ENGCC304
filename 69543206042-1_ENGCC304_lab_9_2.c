#include <stdio.h>

int main() {
    int array[5] , sum = 0;
    scanf("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);
    sum = array[0] + array[1] + array[2] + array[3] + array[4] ;
    printf("Sum = %d\n", sum);
    return 0;
}