#include <stdio.h>

int main() {
    FILE *fp;
    int number;
    int result;

    if (scanf("%d", &number) != 1) return 0;

    fp = fopen("number.txt", "w+");
    if (fp != NULL) {
        fprintf(fp, "%d", number);

        rewind(fp);

        fscanf(fp, "%d", &result);
        fclose(fp);
    } else {
        result = number;
    }

    printf("Number = %d\n", result);
    return 0;
}