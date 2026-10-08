#include <stdio.h>

struct Rectangle {
    int width;
    int height
};

int getArea(struct Rectangle rect) {
    return rect.width * rect.height;
}

int main() {
    struct Rectangle rect;

    scanf("%d %d", &rect.width, &rect.height);

    printf("Area = %d\n", getArea(rect));

    return 0;
}