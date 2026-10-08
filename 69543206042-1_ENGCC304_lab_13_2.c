#include <stdio.h>

    void addOne(int *n) {
        *n = *n + 1;
    }

    int main() {
        int num ;

        scanf("%d", &num);

        addOne(&num);

        printf("Result = %d\n", num); 

        return 0;
    }

