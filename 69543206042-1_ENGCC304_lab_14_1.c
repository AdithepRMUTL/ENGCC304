#include <stdio.h>

struct Student {
    int id;
    int score;
};

int main() {
    struct Student stu;

    scanf("%d %d", &stu.id, &stu.score);
    printf("ID = %d\n", stu.id);
    printf("Score = %d\n", stu.score);

    return 0;

}