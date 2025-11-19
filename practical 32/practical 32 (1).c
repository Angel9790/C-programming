#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end)
{
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    FILE *fp = fopen("Demo.txt", "r");
    FILE *out = fopen("Output.txt", "w");

    if (fp == NULL) {
        printf("Error: Demo.txt not found!\n");
        return 1;
    }

    char line[500];

    while (fgets(line, sizeof(line), fp)) {
        int i = 0;

        while (line[i] != '\0') {
            while (isspace(line[i]) && line[i] != '\0') {
                printf("%c", line[i]);
                fputc(line[i], out);
                i++;
            }

            int start = i;
            while (!isspace(line[i]) && line[i] != '\0')
                i++;

            int end = i - 1;

            reverseWord(&line[start], &line[end]);

            for (int k = start; k <= end; k++) {
                printf("%c", line[k]);
                fputc(line[k], out);
            }
        }
    }

    fclose(fp);
    fclose(out);

    printf("\n\nReversed content saved to Output.txt\n");
    printf("this program is made by Angel_Bavarva_25CE006");

    return 0;
}
