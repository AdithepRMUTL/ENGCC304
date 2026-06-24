#include <stdio.h>

int main() {
    int student_id;
    char nickname[50];
    char section[10];

    scanf("%d", &student_id);
    scanf("%s", nickname);
    scanf("%s", section);

    printf("Student ID: %d\n", student_id);
    printf("Nickname: %s\n", nickname);
    printf("Section: %s\n", section);

    return 0;
}