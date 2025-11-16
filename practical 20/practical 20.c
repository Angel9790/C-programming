#include<stdio.h>
void main()
{
    int ID[20],i,n;
    printf("enter the element\n");
    for(i=0;i<20;i++)
    {
        scanf("%d",&ID[i]);
    }
    printf("enter the missing ID");
    scanf("%d",&n);
    for(i=0;i<20;i++)
    {
        if (ID[i]==n)
        {
            printf("%d is available on index %d\n",ID[i],i);
            break;
        }
    }
printf("this program is made by Angel_Bavarva_25CE006");
}

