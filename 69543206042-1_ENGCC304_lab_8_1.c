#include <stdio.h>

int main() {

    int price , quantity , Total = 0 ;

    scanf("%d %d", &price , &quantity);

    Total = price * quantity ;

    printf("Total = %d\n", Total);

    return 0;
}