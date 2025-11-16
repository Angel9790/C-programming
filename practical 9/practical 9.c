#include<stdio.h>
void main()
{
    float total_amount,discount,pay,dis,payment;
    printf("Enter total amount:");
    scanf("%f",&total_amount);
    printf("total amount:%f\n",total_amount);
    if(total_amount>=1000 && total_amount<=5000)
    {
        discount=total_amount*0.1;
        printf("your discount:%f\n",discount);
        pay=total_amount-discount;
        printf("you pay total amount:%f Rs\n",pay);
    }
    else if(total_amount>5000)
    {
        dis=total_amount*0.2;
        printf("your discount:%f Rs\n",dis);
        payment=total_amount-dis;
        printf("you pay total amount:%f Rs\n",payment);
    }
    else
    {
        printf("you are not able for discount\n");
    }
    printf("this program is made by Angel_Bavarva_25CE006");
}

