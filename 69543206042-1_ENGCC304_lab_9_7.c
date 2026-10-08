#include <stdio.h>

int main() {
    int array[4] , i ;
    
    for(i = 0; i < 4; i++) {
        scanf("%d", &array[i]);
    }

    for(i = 0; i < 4; i++) {
        array[i] = array[i] + 1;
        printf("%d\n", array[i]);
    }


    return 0;
}