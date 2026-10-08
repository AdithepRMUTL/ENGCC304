#include <stdio.h>

int sumTwo(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    scanf("%d %d", &num1, &num2);
    
    int result = sumTwo(num1, num2);
    
    printf("Sum = %d\n", result);
    
    return 0;
}