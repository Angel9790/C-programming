#include<stdio.h>
void main()
{
    int d[25],p=0,n=0,e=0,o=0,i;
    for(i=0;i<25;i++)
    {
        printf("Enter the number %d:",i+1);
        scanf("%d",&d[i]);
    }
    for(i=0;i<25;i++)
    {
        if(d[i]>0)
        {
            p++;
        }
        else if(d[i]<0)
        {
            n++;
        }
        if(d[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("Total number of positive numbers:%d\n",p);
    printf("Total number of negative numbers:%d\n",n);
    printf("Total number of even numbers:%d\n",e);
    printf("Total number of odd numbers:%d\n",o);
    printf("this program is made by Angel_Bavarva_25CE006");
}

