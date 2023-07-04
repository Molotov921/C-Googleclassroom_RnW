/*Write a program to print integer value of day of week using enum.*/
#include<stdio.h>
enum DaysOfWeek 
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    NUM_DAYS
};
void main() 
{
	printf("%d\n",SUNDAY);
	printf("%d\n",MONDAY);
	printf("%d\n",TUESDAY);
	printf("%d\n",WEDNESDAY);
	printf("%d\n",THURSDAY);
	printf("%d\n",FRIDAY);
	printf("%d\n",SATURDAY);
}