#include<stdio.h>

void main()
{
    int a,total=0;

    printf("Enter 1 for Burger Rs 150\n");
    printf("Enter 2 for Pizza Rs 200\n");
    printf("Enter 3 for Pasta Rs 120\n");
    printf("Enter 4 for Sandwich Rs 100\n");
    printf("Enter 5 for French Fries Rs 80\n");
   x: printf("\nEnter your food number between 1 to 5:\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            total=total+150;
            printf("your order is Burger\n");
            printf("if your order id finish enter 0 \n");
            goto x;
            break;
        case 2:
            total=total+200;
            printf("your order is Pizza\n");
            printf("if your order is finish enter 0 \n");
            goto x;
            break;
        case 3:
            total=total+120;
            printf("your order is Pasta\n");
            printf("if your order is finish enter 0 \n");
            goto x;
            break;
        case 4:
            total=total+100;
            printf("your order is Sandwich\n");
            printf("if your order is finish enter 0 \n");
            goto x;
            break;
        case 5:
            total=total+80;
            printf("your order is French Fries\n");
            printf("if your order is finish enter 0 \n");
            goto x;
            break;
        case 0:
            printf("your order is finish \n");
            printf("total bill amount:%d Rs\n",total);
            break;
        default:
            printf("Enter 1 to 5\n");
    }
    printf("this program is made by Angel_Bavarva_25CE006");
}





