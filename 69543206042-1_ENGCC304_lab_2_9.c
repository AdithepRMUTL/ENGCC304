#include <stdio.h>

int main(){
    int price, quantity , Total_price;

    scanf("%d %d", &price, &quantity);
    Total_price = price * quantity;

    printf("Total price = %d", Total_price);

    return 0;
}