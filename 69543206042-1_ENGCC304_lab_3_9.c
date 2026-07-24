#include <stdio.h>

int main() {
    int number ;

    scanf("%d", &number);

    if (number >= 10 && number <=20) {
        printf("In Range\n");
    } else {
        printf("Out of Range\n");
    }

    return 0;
}