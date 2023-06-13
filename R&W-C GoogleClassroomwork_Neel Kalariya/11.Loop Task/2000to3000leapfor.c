/*wap to Find leap year from 2000 to 3000 using for loop.*/
#include<stdio.h>
void main() 
{
    int startYear=2000;
    int endYear=3000;

    printf("Leap years from %d to %d = \n",startYear,endYear);

    for(intyear=startYear;year<=endYear;year++) 
    {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
            printf("%d\n",year);
        }
    }
}