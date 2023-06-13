/*wap to Find leap year from 2000 to 3000 using do while loop.*/
#include<stdio.h>
void main() 
{
    int year=2000;

    printf("Leap years between 2000 and 3000 = \n");

    do 
    {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
            printf("%d\n",year);
        }
        year++;
    } 
    while(year <= 3000);
}