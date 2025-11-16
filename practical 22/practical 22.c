#include<stdio.h>
void main()
{
    char seating[5][10];
    int reserved_seat;
    int row,seat;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<10;j++)
        {
            seating[i][j]='O';
        }
    }
    printf("Welcome to theater seating arrangement system!\n");
    printf("the theater has 5 rows and 10 seats per row.\n");
    printf("enter the number of reserved seats: ");
    scanf("%d",&reserved_seat);

    for(int i=1;i<=reserved_seat;i++)
    {
        printf("Enter row and seat number for reserved seats %d (e.g.,2 5): ",i);
        scanf("%d %d",&row,&seat);

        if(row>0 && row<=5 && seat>0 && seat<=10)
        {
            seating[row-1][seat-1]='X';
        }
        else
        {
            printf("Invalid row or seat number. please enter values within range.\n");
            i--;
        }
    }
    printf("\nSeating chart:\n");
    for(int i=0;i<5;i++)
    {
        printf("Row %d: ",i+1);
        for(int j=0;j<10;j++)
        {
            printf(" %c ",seating[i][j]);
        }
        printf("\n");
    }
    printf("this program is made by Angel_Bavarva_25CE006");

}

