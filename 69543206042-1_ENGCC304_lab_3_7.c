#include <stdio.h>

int main () {
    int temperature ;

    scanf("%d", &temperature);

    if (temperature <= 15) {
        printf("Cold\n");
    } else if (temperature <= 30) {
        printf("Normal\n");
    } else {
        printf("Hot\n");
    }

    return 0;
}

