#include<stdio.h>
#define ticket 300
void main()
{
    int age;
    printf("Enter the age: \n");
    scanf("%d",&age);
    if(age<12)
    {
    printf("Free ticket for you");
    }
    else
    {
    printf("you have to pay for ticket:%d\n",ticket);
    }
}
