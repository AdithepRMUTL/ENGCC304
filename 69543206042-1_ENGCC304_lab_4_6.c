#include <stdio.h>

int main () {
    int light_signal;

    scanf("%d", &light_signal);

    switch (light_signal) {
        case 1:
            printf("Stop\n");
            break;
        case 2:
            printf("Ready\n");
            break;
        case 3:
            printf("Go\n");
            break;
        default:
            printf("Unknown signal\n");
    }

    return 0;
}