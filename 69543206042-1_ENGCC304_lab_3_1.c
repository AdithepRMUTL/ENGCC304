#include <stdio.h>

int main (){
    int number_1 , number_2 ;

    scanf("%d %d", &number_1 , &number_2);

    if (number_1 > number_2) {
        printf("First is bigger\n");
    } else if (number_1 == number_2) {
        printf("Equal\n");
    } else {
        printf("Second is bigger\n");
    }

    return 0;
}