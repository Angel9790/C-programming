#include<stdio.h>
void main()
{
    int A;
    for(A=1;A<=50;A++)
    {

        if(A%5==0)
        {
            printf("book ID :%d(special edition)\n");
            continue;
        }
        printf("book ID :%d\n",A);
    }
    printf("this programme made by Angel Bavarva\n");
}
