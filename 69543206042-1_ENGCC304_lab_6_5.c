#include <stdio.h>

int main(){
    int number , sum = 0 , count = 0;

    scanf("%d", &number);

    while (number != -1){
        sum = sum + number;
        count++;
        scanf("%d", &number);
    }

    printf("Average = %d\n",sum / count);
    return 0;
    
}