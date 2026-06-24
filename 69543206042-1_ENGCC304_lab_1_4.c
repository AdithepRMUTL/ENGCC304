#include <stdio.h>

int main() {
    char course[20];
    char language[20];
    int week = 1;

    scanf("%s", course);
    scanf("%s", language);
    scanf("%d", &week);

    printf("Course: %s\n", course);
    printf("Language: %s\n", language);
    printf("Week: %d\n", week);

    return 0;
}