#include <stdio.h>
#include <math.h>

void collectinput();
void valid(int a, int b, int c);
float area(int a, int b, int c);

int main()
{
    collectinput();
    return 0;
}

void collectinput()
{
    int a, b, c;
    printf("Enter the 1st side of triangle: ");
    scanf("%d", &a);

    printf("Enter the 2nd side of triangle: ");
    scanf("%d", &b);

    printf("Enter the 3rd side of triangle: ");
    scanf("%d", &c);

    valid(a, b, c);
}

void valid(int a, int b, int c)
{
    if(a<=0 || b<=0 || c<=0)
    {
        printf("invalid triangle: side lengths must be positive numbers\n");
    }
    else if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        printf("Valid triangle\n");
        printf("Area of triangle is: %.2f\n", area(a, b, c));
    }
    else
    {
        printf("invalid triangle\n");
    }
    printf("This Program is Made by Angel_Bavarva_25CE006\n");
}

float area(int a, int b, int c)
{
    float s, area;
    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

