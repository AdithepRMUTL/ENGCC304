#include <stdio.h>

int main (){
    int number , i = 1;

    scanf("%d", &number);

    while (i <= number) {
        if (i % 2 != 0) {
            i++;
            continue; 
        }

        printf("%d\n", i); 
        i++;
    }
    return 0;

}