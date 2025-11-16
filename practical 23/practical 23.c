#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of days : ");
    scanf("%d",&n);
    int price[n];

    printf("Enter the price of %d day : ",n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&price[i]);
    }
    int minprice=price[0];
    int profit=0,maxprice=0;
    for(int i=0;i<n;i++)
    {
        if(price[i]<minprice)
        {
             minprice=price[i];
        }

        else
        {
            profit=price[i]-minprice;
            if(profit>maxprice)
            {
              maxprice=profit;
            }
        }
    }
        if(maxprice>0)
        {
           printf("your profit is : %d \n",maxprice);
        }
        else
        {
             printf("no profit\n");
        }
    printf("this program is made by Angel_Bavarva_25CE006");
}

