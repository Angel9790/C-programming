#include<stdio.h>
void main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you are eligible for open saving account.");
    }
    else if(age<=0)
    {
        printf("Enter valid age.");
    }
    else
    {
        printf("you are not eligible for open saving account.");
    }
}
