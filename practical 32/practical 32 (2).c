#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int n, mark, i;
    char filename[30] = "marks.dat";

    fp = fopen(filename, "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &mark);
        putw(mark, fp);
    }
    fclose(fp);

    fp = fopen(filename, "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("\nMarks stored in the file:\n");
    for (i = 0; i < n; i++) {
        mark = getw(fp);
        printf("Student %d: %d\n", i + 1, mark);
    }
    fclose(fp);
    printf("this program is made by Angel_Bavarva_25CE006");

    return 0;
}
