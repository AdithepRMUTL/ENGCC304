#include <stdio.h>

void addTen(int *n) {
    *n = *n + 10;
}

int main() {
    int num;
    
    scanf("%d", &num);
    
    addTen(&num);
    
    printf("Result = %d\n", num);
    
    return 0;
}