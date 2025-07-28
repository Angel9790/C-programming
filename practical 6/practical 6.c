#include<stdio.h>
void main()

{
    float celsius, fahrenheit;
    printf("enter the temprature in celsius:\n");
    scanf("%f",&celsius);
    printf("temprature in Fahrenheit is:%f\n");
    fahrenheit=(celsius*9/5)+32;
    printf("fahrenheit: %f",fahrenheit);
}
