#include <stdio.h>

int main(){
    char name[50];
    int number;

    scanf("%s", name);
    scanf("%d", &number);

    printf("+-----------+\n");    
    printf("| %s %d |", name, number);
    printf("\n+-----------+\n");

    return 0;
}