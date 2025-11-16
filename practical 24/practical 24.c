#include <stdio.h>
#include <string.h>

void main()
{
    char note[100], rev[100], n[100];
    int a, i, l, j, s;

    printf("====================NOTES=======================\n");
    printf("Enter 1 for Count a Length of Note\n");
    printf("Enter 2 for Reverse a Note\n");
    printf("Enter 3 for Compare Two Notes\n");
    printf("Enter 4 for Copy a Note\n");
    printf("Enter 5 for Concatenate Notes\n");
    printf("Enter 6 for Concatenate Notes to Upper Case\n");
    printf("Enter 7 for Concatenate Notes to Lower Case\n");
    printf("Enter 8 for Capitalize each word of Notes\n");
    printf("Enter 9 for Exit from Notes\n");
    printf("===============================================\n");
    printf("Enter your note: ");
    gets(note);

    while (1)
    {
        printf("Enter Number: ");
        scanf("%d", &a);
        getchar(); // Clear newline left by scanf

        if (a == 9)
        {
            printf("You are exit from the program.\n");
            break;
        }

        if (a == 1)
        {
            l = 0;
            for (i = 0; note[i] != '\0'; i++)
            {
                l++;
            }
            printf("Your note length including spaces: %d\n", l);
        }
        else if (a == 2)
        {
            l = 0;
            for (i = 0; note[i] != '\0'; i++)
                l++;

            for (i = 0; i < l; i++)
            {
                rev[i] = note[l - i - 1];
            }
            rev[l] = '\0';
            puts(rev);
        }
        else if (a == 3)
        {
            printf("Enter second note: ");
            gets(n);

            if (strcmp(note, n) == 0)
                printf("Both notes are same\n");
            else
                printf("Both notes are not same\n");
        }
        else if (a == 4)
        {
            printf("Copied Note: ");
            puts(note);
        }
        else if (a == 5)
        {
            printf("Enter your second note: ");
            gets(n);
            l = 0;
            for (i = 0; note[i] != '\0'; i++)
            {
                rev[l++] = note[i];
            }
            for (i = 0; n[i] != '\0'; i++)
            {
                rev[l++] = n[i];
            }
            rev[l] = '\0';
            puts(rev);
        }
        else if (a == 6)
        {
            for (i = 0; note[i] != '\0'; i++)
            {
                if (note[i] >= 'a' && note[i] <= 'z')
                    n[i] = note[i] - 32;
                else
                    n[i] = note[i];
            }
            n[i] = '\0';
            puts(n);
        }
        else if (a == 7)
        {
            for (i = 0; note[i] != '\0'; i++)
            {
                if (note[i] >= 'A' && note[i] <= 'Z')
                    n[i] = note[i] + 32;
                else
                    n[i] = note[i];
            }
            n[i] = '\0';
            puts(n);
        }
        else if (a == 8)
        {
            s = 1;
            for (i = 0; note[i] != '\0'; i++)
            {
                if (s && note[i] >= 'a' && note[i] <= 'z')
                    n[i] = note[i] - 32;
                else if (!s && note[i] >= 'A' && note[i] <= 'Z')
                    n[i] = note[i] + 32;
                else
                    n[i] = note[i];
                if (note[i] == ' ')
                    s = 1;
                else
                    s = 0;
            }
            n[i] = '\0';
            puts(n);
        }
        else
        {
            printf("Enter valid number:\n");
        }
    }
    printf("this program is made by Angel_Bavarva_25CE006");
}
