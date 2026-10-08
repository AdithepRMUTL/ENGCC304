#include <stdio.h>

struct Rectangle {
    int width;
    int height;
};

int getArea(struct Rectangle rect) {
    return rect.width * rect.height;
}

int main() {
    struct Rectangle rect1;

    scanf("%d %d", &rect1.width, &rect1.height);

    printf("Area = %d\n", getArea(rect1));

    return 0;
}