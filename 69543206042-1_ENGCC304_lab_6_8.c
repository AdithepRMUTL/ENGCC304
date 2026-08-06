#include <stdio.h>

int main(){
    int number;

    do{
        scanf("%d", &number);
    } while (number < 1 || number > 5);

    printf("Accepted = %d",number);
    return 0;
    
}