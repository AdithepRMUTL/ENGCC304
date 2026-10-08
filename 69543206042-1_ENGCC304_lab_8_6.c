#include <stdio.h>

int main() {
    int password = 1234;

    do {
        scanf("%d", &password);
        if (password != 1234) {
            printf("Wrong\n");
        } 
    } while (password != 1234);

    printf("Correct\n");

    return 0;
}