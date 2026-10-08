#include <stdio.h>


int main() {
    int array[5] , i , target , found = 0 , count = 0;

    for(i = 0 ; i < 5 ; i++) {
        scanf("%d", &array[i]);
    }

    scanf("%d", &target);

    for(i = 0 ; i < 5 ; i++) {
        if(array[i] == target) {
            found = 1;
            count++;
        }
    }

    printf("Count = %d\n", count);
    return 0;
}