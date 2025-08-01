#include<stdio.h>
void main()
{
    float total_amount,discount,pay,dis,payment;
    printf("Enter total amount:");
    scanf("%f",&total_amount);
    printf("total amount:%f",total_amount);
    if(total_amount>=1000 && total_amount<=5000)
    {
        discount=total_amount*0.1;
        printf("your discount:%f",discount);
        pay=total_amount-discount;
        printf("you pay total amount:%f Rs",pay);
    }
    else if(total_amount>5000)
    {
        dis=total_amount*0.2;
        printf("your discount:%f Rs",dis);
        payment=total_amount-dis;
        printf("you pay total amount:%f Rs",payment);
    }
    else
    {
        printf("you are not able for discount");
    }
}
