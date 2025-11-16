#include<stdio.h>
void main()
{
    int n=21,user,computer,x=0;
    printf("Rules:\n");
    printf("1. the game starts with 21 matchsticks\n");
    printf("2. the user is asked to pick 1,2,3 or 4 matchsticks\n");
    printf("3. after the user picks, the computer make its pick\n");
    printf("4. the player who is forced to pick the last matchstick loses the game\n");
    printf("instruction\n");
    printf("enter 1 for pick up 1 matchstick\n");
    printf("enter 2 for pick up 2 matchstick\n");
    printf("enter 3 for pick up 3 matchstick\n");
    printf("enter 4 for pick up 4 matchstick\n");
    printf("lets play a game\n");

    while(n>1)
    {
        printf("There are %d matchsticks remaining\n",n);
        printf("how many matchstick you picked up?\n");
        printf("Enter:");
        scanf("%d",&user);

        if(user==1)
        {
            printf("you picked 1 matchstick\n");
            n=n-1;
        }
        else if(user==2)
        {
            printf("you picked 2 matchstick\n");
            n=n-2;
        }
        else if(user==3)
        {
            printf("you picked 3 matchsticks\n");
            n=n-3;
        }
        else if(user==4)
        {
            printf("you picked 4 matchsticks\n");
            n=n-4;
        }
        else
        {
            printf("read the instruction\n");
        }

        if(user==1 || user==2 || user==3 || user==4)
        {
        x=(n-1)%5;
        if(x==0)
        {
        n=n-1;
        }

        n=5-user;
        printf("computer picked %d matchstick\n",n);
        }
       if(n==1)
        {
            printf("you loose the game\n");
            break;
        }
    }

    printf("this program is made by Angel_Bavarva_25CE006");
}

