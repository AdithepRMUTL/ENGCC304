#include <stdio.h>

struct Product {
    int price , quantity;
};

int getproduct(struct Product item) {
    return item.price * item.quantity;
}

int main() {
    struct Product Total;

    scanf("%d %d", &Total.price, &Total.quantity);

    printf("Total = %d\n", getproduct(Total));

    return 0;
}