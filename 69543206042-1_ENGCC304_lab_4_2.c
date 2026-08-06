#include <stdio.h>

int main() {
    int menu ;

    scanf("%d", &menu);

    switch (menu) {
        case 1:
            printf("Price = 10");
            break;
        case 2:
            printf("Price = 15");
            break;
        case 3:
            printf("Price = 20");
            break;
        default:
            printf("Invalid menu");
    }

    return 0;
}