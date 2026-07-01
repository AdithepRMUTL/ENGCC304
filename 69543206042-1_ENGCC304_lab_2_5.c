#include <stdio.h>

int main() {
    int wideth, height , perimeter;
    scanf("%d %d", &wideth, &height);
    perimeter = 2 * (wideth + height);
    printf("Perimeter = %d", perimeter);
    return 0;
}