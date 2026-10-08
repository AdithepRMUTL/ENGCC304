#include <stdio.h>

struct Product {
    int quantity;
};

int sumQuantity(struct Product products[], int size) {
    int i, total = 0;
    for (i = 0; i < size; i++) {
        total = total + products[i].quantity;
    }
    return total;
}

int main() {
    struct Product products[3];
    int i;

    for (i = 0; i < 3; i++) {
        scanf("%d", &products[i].quantity);
    }

    printf("Total = %d\n", sumQuantity(products, 3));

    return 0;
}