#include <stdio.h>

int main() {

    int number_1, number_2, menu, result = 0;

    scanf("%d %d", &number_1 , &number_2);
    scanf("%d", &menu);

    switch(menu) {
        case 1:
            result = number_1 + number_2;
            printf("Result = %d", result);
            break;
        case 2:
            result = number_1 - number_2;
            printf("Result = %d", result);
            break;
        default:
            printf("Invalid");
    }

    return 0;
}