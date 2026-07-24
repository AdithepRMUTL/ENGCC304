#include <stdio.h>

int main(){
    int number1 , number2, number3 ;

    scanf("%d %d %d", &number1, &number2, &number3);

    if (number1 > number2) {
        if (number1 > number3) {
            printf("Max = %d\n", number1);
        } else {
            printf("Max = %d\n", number3);
        }
    } else {
        if (number2 > number3) {
            printf("Max = %d\n", number2);
        } else {
            printf("Max = %d\n", number3);
        }
    }

    return 0;
    
}