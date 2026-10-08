#include <stdio.h>

int main() {
    int array[5] , sum = 0 , max;
    scanf("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);

    max = array[0];
    for(int i = 1; i < 5; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }
    
    printf("Max = %d\n", max);

    return 0;
}