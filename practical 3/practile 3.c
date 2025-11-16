#include<stdio.h>
void main()
{
    double Weight,Height,BMI;
    printf("calculater for BODY MASK INDEX(BMI)\n");
    printf("enter your Weight in kilograms:");
    scanf("%lf",&Weight);
    printf("enter your Height in meters:");
    scanf("%lf",&Height);
    BMI=Weight/(Height*Height);
    printf("your BMI is: %lf\n",BMI);
    printf("this program is made by Angel_Bavarva_25CE006");

}

