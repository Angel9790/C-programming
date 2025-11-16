#include<stdio.h>
#define ticket 300
void main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);
    if(age<12)
    {
    printf("Free ticket for you\n");
    }
    else
    {
    printf("you have to pay for ticket:%d\n",ticket);
    }
    printf("this program is made by Angel_Bavarva_25CE006");
}

