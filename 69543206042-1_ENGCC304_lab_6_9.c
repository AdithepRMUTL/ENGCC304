#include <stdio.h>

int main (){
    int password;

    do{
        scanf("%d",&password);
        if (password != 1234){
            printf("Wrong\n");
        }
    } while (password != 1234);

    printf("Correct");
    return 0;
    
}