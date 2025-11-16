#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    (marks>=90) ? printf("Grade A"):
    (marks>=80 && marks<90) ? printf("Grade B\n"):
    (marks>=70 && marks<80) ? printf("Grade C\n"):
    (marks>=60 && marks<70) ? printf("Grade D\n"):
    (marks<60) ? printf("Grade F"): printf("invalid input\n");
    printf("this program is made by Angel_Bavarva_25CE006");
}

