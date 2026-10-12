#include <stdio.h>

int main(void) {
    FILE *fp;
    int num1, num2;
    int val1, val2;

    if (scanf("%d %d", &num1, &num2) != 2) return 0;

    // เขียนค่าแรกด้วยโหมด "w"
    fp = fopen("append.txt", "w");
    if (fp != NULL) {
        fprintf(fp, "%d\n", num1);
        fclose(fp);
    }

    // เพิ่มค่าที่สองต่อท้ายด้วยโหมด "a"
    fp = fopen("append.txt", "a");
    if (fp != NULL) {
        fprintf(fp, "%d\n", num2);
        fclose(fp);
    }

    // อ่านค่าทั้งสองกลับมาบวกกัน
    fp = fopen("append.txt", "r");
    if (fp != NULL) {
        fscanf(fp, "%d", &val1);
        fscanf(fp, "%d", &val2);
        fclose(fp);
    } else {
        val1 = num1;
        val2 = num2;
    }

    printf("Sum = %d\n", val1 + val2);
    return 0;
}