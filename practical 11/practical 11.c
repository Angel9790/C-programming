#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    (marks>=90) ? printf("Grade A"):
    (marks>=80 && marks<90) ? printf("Grade B"):
    (marks>=70 && marks<80) ? printf("Grade C"):
    (marks>=60 && marks<70) ? printf("Grade D"):
    (marks<60) ? printf("Grade F"): printf("invalid input");
}
