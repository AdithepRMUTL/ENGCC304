#include <stdio.h>

int main () {
    int i , score , sum = 0 , average;


    for (i = 1; i < 5; i++) {
        scanf("%d", &score);
        sum = sum + score;
    }

    average = sum / 4;
    printf("Average = %d\n", average);

    return 0;
}