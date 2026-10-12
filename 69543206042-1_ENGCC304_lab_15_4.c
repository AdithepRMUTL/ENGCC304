#include <stdio.h>

int main(void) {
    FILE *fp;
    int arr[3];
    int read_arr[3];

    for (int i = 0; i < 3; i++) {
        if (scanf("%d", &arr[i]) != 1) return 0;
    }

    fp = fopen("array.txt", "w");
    if (fp != NULL) {
        for (int i = 0; i < 3; i++) {
            fprintf(fp, "%d\n", arr[i]);
        }
        fclose(fp);
    }

    fp = fopen("array.txt", "r");
    if (fp != NULL) {
        for (int i = 0; i < 3; i++) {
            fscanf(fp, "%d", &read_arr[i]);
            printf("%d\n", read_arr[i]);
        }
        fclose(fp);
    } else {
        for (int i = 0; i < 3; i++) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}