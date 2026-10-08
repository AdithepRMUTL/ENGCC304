#include <stdio.h>

int main() {
    int array[4] , sum = 0;
    scanf("%d %d %d %d", &array[0], &array[1], &array[2], &array[3]);
    sum = array[0] + array[1] + array[2] + array[3];
    sum = sum / 4;
    printf("Average = %d\n", sum);
    return 0;
}