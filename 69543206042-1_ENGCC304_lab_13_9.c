#include <stdio.h>

int countEven(int numbers[], int size) {
    int evenCount = 0;
    
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
        }
    }
    
    return evenCount;
}

int main() {
    int numbers[4];

    for (int i = 0; i < 4; i++) {
        scanf("%d", &numbers[i]);
    }

    int totalEven = countEven(numbers, 4);

    printf("Count = %d\n", totalEven);

    return 0;
}