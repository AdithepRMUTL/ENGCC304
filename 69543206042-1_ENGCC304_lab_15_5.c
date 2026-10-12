#include <stdio.h>

int main(void) {
    FILE *fp;
    int arr[4];
    int sum = 0;

    for (int i = 0; i < 4; i++) {
        if (scanf("%d", &arr[i]) != 1) return 0;
    }

    fp = fopen("sum_file.txt", "w");
    if (fp != NULL) {
        for (int i = 0; i < 4; i++) {
            fprintf(fp, "%d\n", arr[i]);
        }
        fclose(fp);
    }

    fp = fopen("sum_file.txt", "r");
    if (fp != NULL) {
        int val;
        for (int i = 0; i < 4; i++) {
            if (fscanf(fp, "%d", &val) == 1) {
                sum += val;
            }
        }
        fclose(fp);
    } else {
        for (int i = 0; i < 4; i++) {
            sum += arr[i];
        }
    }

    printf("Sum = %d\n", sum);
    return 0;
}