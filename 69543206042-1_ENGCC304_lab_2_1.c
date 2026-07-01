#include <stdio.h>

int main(){
    int student_id;
    int age;
    char name[10];

    scanf("%d", &student_id);
    scanf("%s", name);
    scanf("%d", &age);

    printf("Student ID: %d\n", student_id);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    return 0;
}