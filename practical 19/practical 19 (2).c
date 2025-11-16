#include<stdio.h>
void main()
{
    int n=5,r,c;
    for(r=1; r<=n; r++)
    {
        for(c=1; c<=n*2-r; c++)
        {
            if(r==c || c==(2*n-r))
                printf("%d ",c);
            else if(r==1)
                printf("%d ",c);
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("this program is made by Angel_Bavarva_25CE006");
}

