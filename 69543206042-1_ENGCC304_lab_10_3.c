#include <stdio.h>

int main() {

    int arr[5] , i , target , position = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    for (i = 0; i < 5; i++) {
        if (arr[i] == target) {
            position = i + 1;
            break;
        }
    }

    printf("Position = %d", position); 
    return 0;
}