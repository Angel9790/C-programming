#include<stdio.h>
void main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you are eligible for open saving account.\n");
    }
    else if(age<=0)
    {
        printf("Enter valid age.\n");
    }
    else
    {
        printf("you are not eligible for open saving account.\n");
    }
    printf("this program is made by Angel_Bavarva_25CE006");
}

