#include <stdio.h>

struct Student {
    int id , score;
};

int main() {
    struct Student students[2];
    int i;

    for (i = 0; i < 2; i++) {
        scanf("%d %d", &students[i].id, &students[i].score);
    }

    printf("Student 1 = %d %d\n", students[0].id, students[0].score);
    printf("Student 2 = %d %d", students[1].id, students[1].score);

    return 0;
}
