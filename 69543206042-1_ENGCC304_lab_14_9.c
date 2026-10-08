#include <stdio.h>

struct Student {
    int score;
};

int maxScore(struct Student students[], int size) {
    int i, max;
    max = students[0].score;

    for (i = 1; i < size; i++) {
        if (students[i].score > max) {
            max = students[i].score;
        }
    }

    return max;
}

int main() {
    struct Student students[3];
    int i;

    for (i = 0; i < 3; i++) {
        scanf("%d", &students[i].score);
    }

    printf("Max = %d", maxScore(students, 3));

    return 0;
}