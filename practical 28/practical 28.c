#include<stdio.h>
union Book
{
    int accession_no;
    char title[50];
    char author[50];
    float price;
    int issue;
};
void main()
{
    union Book BookStatus;
    int _accession_no;
    char _title[50];
    char _author[50];
    float _price;
    int _issue;

    printf("Enter accession number : ");
    scanf("%d",&BookStatus.accession_no);
    _accession_no=BookStatus.accession_no;

    printf("\nEnter title : ");
    fflush(stdin);
    gets(BookStatus.title);
    strcpy(_title,BookStatus.title);

    printf("\nEnter author : ");
    fflush(stdin);
    gets(BookStatus.author);
    strcpy(_author,BookStatus.author);

    printf("\nEnter price : ");
    scanf("%f",&BookStatus.price);
    _price=BookStatus.price;

    printf("\nEnter status (0:available , 1:issued) : ");
    scanf("%d",&BookStatus.issue);
    _issue=BookStatus.issue;

    printf("\nBook Details\n");
    printf("Accession No : %d\n",_accession_no);
    printf("Title : %s\n",_title);
    printf("Author : %s\n",_author);
    printf("Price : %f\n",_price);

    if(BookStatus.issue==0)
        printf("Status : AVAILABLE\n");
    else
        printf("Status : ISSUED\n");
        printf("this program is made by Angel_Bavarva_25CE006");


}
