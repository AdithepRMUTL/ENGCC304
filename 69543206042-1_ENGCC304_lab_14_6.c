#include <stdio.h>

struct Student {
    int id , score;
};

void addBonus(struct Student *stu) {
    stu->score += 5;
}

int main() {
    struct Student stu;

    scanf("%d %d", &stu.id, &stu.score);
    addBonus(&stu);

    printf("ID = %d\n", stu.id);
    printf("Score = %d\n", stu.score);

    return 0;
}