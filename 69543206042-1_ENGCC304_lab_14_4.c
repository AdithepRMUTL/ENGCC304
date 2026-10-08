#include <stdio.h>

struct Student {
    int id;
    float midterm;
    float final;
};

int main() {
    struct Student stu;
    float average;

    scanf("%d %f %f", &stu.id, &stu.midterm, &stu.final);

    average = (stu.midterm + stu.final) / 2.0f;

    printf("Average = %.2f\n", average);

    return 0;
}