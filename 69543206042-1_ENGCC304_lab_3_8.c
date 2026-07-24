#include <stdio.h>

int main() {
    int price , mumber ;

    scanf("%d %d", &price, &mumber);

    if (price >= 300 || mumber == 1) {
        printf("Free Shipping\n");
    } else {
        printf("Shipping Required\n");
    }

    return 0;
}