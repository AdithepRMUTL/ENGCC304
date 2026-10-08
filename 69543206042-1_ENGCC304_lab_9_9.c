#include <stdio.h>

int main() {
    int array[5], i;

    for(i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    printf("First = %d\n", array[0]);
    printf("Last = %d\n", array[4]);

    return 0;
}