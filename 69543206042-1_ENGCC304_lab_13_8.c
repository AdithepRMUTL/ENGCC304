#include <stdio.h>

void incrementFirst(int numbers[]) {
    numbers[0] = numbers[0] + 1;
}

int main() {
    int numbers[3];

    for (int i = 0; i < 3; i++) {
        scanf("%d", &numbers[i]);
    }

    incrementFirst(numbers);

    for (int i = 0; i < 3; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}