#include <stdio.h>

int main (){
    int number , sum = 0;
    scanf("%d" , &number);

    while (number != 0){
        sum = sum + number;
        scanf("%d", &number);
    }

    printf("Sum = %d", sum);
    return 0;

}