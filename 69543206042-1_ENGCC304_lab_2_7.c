#include <stdio.h>

int main(){
    int total_centimeter;   
    int meter;                
    int centimeter;           

    scanf("%d", &centimeter);

    meter = centimeter / 100;
    total_centimeter = centimeter % 100;

    printf("Meter = %d\n", meter);
    printf("Centimeter = %d\n", total_centimeter);

    return 0;
}






