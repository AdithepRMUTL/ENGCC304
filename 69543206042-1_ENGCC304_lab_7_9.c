#include <stdio.h>

int main() {
    int number1, number2 , menu ;

    scanf("%d %d", &number1, &number2);

    scanf("%d", &menu);

    if (menu == 1) {
        printf("Result = %d\n", number1 + number2);
    } else if (menu == 2) {
        printf("Result = %d\n", number1 - number2);
    } else {
        printf("Invalid\n");
    }    


    return 0;
}