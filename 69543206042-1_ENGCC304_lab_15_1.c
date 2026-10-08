#include <stdio.h>

int main() {
    FILE *fp;
    int number, result;

    scanf("%d", &number);

    fp = fopen("number.txt", "w");
    fprintf(fp, "%d", number);
    fclose(fp);

    fp = fopen("number.txt", "r");
    fscanf(fp, "%d", &result);
    fclose(fp);

    printf("Number = %d", result);
    return 0;
}