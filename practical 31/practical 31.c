#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char *summary;
    int size = 100;

    summary = (char*)calloc(size, sizeof(char));
    printf("Enter short summary: ");
    fgets(summary, size, stdin);

    fp = fopen("summary.txt", "w");
    fputs(summary, fp);
    fclose(fp);

    printf("Need to expand summary? (y/n): ");
    char choice = getchar();
    getchar();

    if (choice == 'y') {
        int new_size = 300;
        summary = (char*)realloc(summary, new_size);
        printf("Enter expanded summary: ");
        fgets(summary, new_size, stdin);

        fp = fopen("summary.txt", "w");
        fputs(summary, fp);
        fclose(fp);
    }

    printf("Final summary:\n%s", summary);
    free(summary);
    printf("this program is made by Angel_Bavarva_25CE006");

    return 0;
}
