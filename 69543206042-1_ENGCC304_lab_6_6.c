#include <stdio.h>

int main() {
    int choice;

    do {
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Hello\n");
        } else if (choice == 2) {
            printf("Bye\n");
        } else if (choice == 0) {
            printf("Exit\n");
        } else {
            printf("Invalid\n");
        }

    } while (choice != 0);

    return 0;
}