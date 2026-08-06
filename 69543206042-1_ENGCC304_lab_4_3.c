#include <stdio.h>

int main () {
    
    int a , b , menu ;

    scanf("%d %d", &a , &b);
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            printf("Result = %d", a + b);
            break;
        case 2:
            printf("Result = %d", a - b);
            break;
        case 3:
            printf("Result = %d", a * b);
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}