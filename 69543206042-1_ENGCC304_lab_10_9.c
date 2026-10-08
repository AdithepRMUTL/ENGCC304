#include <stdio.h>

int main() {

    int array[4] , i , j , temp;

    for(i = 0 ; i < 4 ; i++) {
        scanf("%d", &array[i]);
    }

    for(i = 0 ; i < 3 ; i++) {
        for(j = i + 1 ; j < 4 ; j++) {
            if(array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("First = %d\n", array[0]);
    printf("Last = %d\n", array[3]);

    return 0;
}