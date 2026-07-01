#include <stdio.h>

int main(){
    int score1 , score2 , score3;
    int average;

    scanf("%d %d %d", &score1, &score2, &score3);
    average = (score1 + score2 + score3) / 3;

    printf("Average = %d\n", average);

    return 0;
}