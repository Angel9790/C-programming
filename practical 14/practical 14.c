#include<stdio.h>
int main()
{
    int choice;
    float withdraw_amount,total_amount=5000;
x:
    printf("Enter 1 for withdraw amount.\n");
    printf("Enter 0 for exit.\n");
    scanf("%d",&choice);
    while(1)
        switch(choice)
        {
        case 1:
            printf("Enter your withdraw amount:\n");
            scanf("%f",&withdraw_amount);
            if (withdraw_amount<=total_amount)
            {

                total_amount=total_amount-withdraw_amount;
                printf("your total amount is:%f\n",total_amount);
                goto x;
                break;
            }
            else
            {
                printf("your balance in insufficient.\n");
            }
        case 0:
            return 1;
        }
    printf("this program is made by Angel_Bavarva_25CE006");

}

