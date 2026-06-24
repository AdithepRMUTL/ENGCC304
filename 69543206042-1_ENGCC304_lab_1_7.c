#include <stdio.h>

int main() {
    char name[50] , section[10];

    scanf("%s %s", name, section);

    printf("================\n");
    printf("Name: %s\n", name);
    printf("Section: %s\n", section);
    printf("================\n");

    return 0;
}