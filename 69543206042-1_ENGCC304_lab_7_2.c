#include <stdio.h>

int main() {
    int score;
    
    scanf("%d", &score);

    if (score >= 50 && score <= 100) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}