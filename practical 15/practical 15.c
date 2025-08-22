#include<stdio.h>
void main()
{
    int n;
    printf("Enter your countdown time in second:");
    scanf("%d",&n);
    while(n>=0)
    {
        sleep(1);
        printf("%d\n",n);
        n--;

    }
    printf("countdown is completed");



}
