#include<stdio.h>
void main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            if(c%2==0)
            {
                printf("0\t");
            }
            else
            {
                printf("1\t");
            }
            continue;
        }
        printf("\n");
    }
    printf("this program is made by Angel Bavarva");

}
