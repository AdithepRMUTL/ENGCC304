#include <stdio.h>

int main() {

    int arr[4] , i , j , temp;

    for(i = 0 ; i < 4; i++){
        scanf("%d",&arr[i]);
    }

    for(i = 0 ; i < 3; i++){
        for(j = i + 1 ; j < 4; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Second = %d", arr[1]);
    return 0;
}