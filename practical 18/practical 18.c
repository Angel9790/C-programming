#include<stdio.h>
void main()
{
    int v,h,b,c,r;
    printf("enter the size of table vertically:");
    scanf("%d",&v);
    printf("\nEnter the size of table horizontally:");
    scanf("%d",&h);
    printf("\n multiplication table: (%d * %d)\n",v,h);

    for(c=1;c<=v;c++)
    {
        for(r=1;r<=h;r++)
        {
            b=c*r;
            printf("%d\t",b);
        }
        printf("\n");
    }
    printf("this program is made by Angel_Bavrava_25CE006");
}

