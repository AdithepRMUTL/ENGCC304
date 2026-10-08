#include <stdio.h>

int main() {

    int arr[5] , i , target , found = 0;

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    for(i = 0; i < 5; i++) {
        if(arr[i] == target) {
            found = 1;
            break;
        }
    }

    if(found == 1) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }

    return 0;
}