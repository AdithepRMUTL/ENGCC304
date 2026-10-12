#include <stdio.h>

int main(void) {
    FILE *fp;
    int num1, num2;
    int val1, val2;

    if (scanf("%d %d", &num1, &num2) != 2) return 0;

    fp = fopen("two_numbers.txt", "w+");
    if (fp != NULL) {
        fprintf(fp, "%d %d", num1, num2);

        rewind(fp);

        fscanf(fp, "%d %d", &val1, &val2);
        fclose(fp);
    } else {
        val1 = num1;
        val2 = num2;
    }

    printf("Sum = %d\n", val1 + val2);
    return 0;
}