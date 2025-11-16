#include<stdio.h>
void main()
{
    int n=5,r,c,s;
    for(r=n; r>=1; r--)
    {
        for(s=0; s<n-r; s++)
            printf("  ");
        for(c=r; c>=1; c--)
            printf("%d ", c);
        for(c=2; c<=r; c++)
            printf("%d ",c);
        printf("\n");
    }
    for (r=2; r<=n; r++)
    {
    for(s=0; s<n-r; s++)
            printf("  ");
        for(c=r; c>=1; c--)
            printf("%d ", c);
        for(c=2; c<=r; c++)
            printf("%d ",c);
        printf("\n");
    }
printf("this program is made by Angel_Bavarva_25CE006");
}

