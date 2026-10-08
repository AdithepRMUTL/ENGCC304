#include <stdio.h>

struct Rectangle {
    int width;
    int height;
};

int main() {
    struct Rectangle rect1;
    scanf("%d %d", &rect1.width, &rect1.height); 

    int area = rect1.width * rect1.height;
    printf("Area = %d\n", area);

    return 0;
}