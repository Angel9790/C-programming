#include<stdio.h>
void main()
{

    float distance=0.5;
    int minute=1;

    while(distance<=10)
    {
        sleep(1);
        printf("minute %d: distance covered=%.2f km\n",minute,distance);
        minute++;
        distance=distance+0.5;
    }

           printf("marathon completed\n");


}
