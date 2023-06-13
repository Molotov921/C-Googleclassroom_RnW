/* Write C program to find out max from 4 numbers using nested if.*/
#include<stdio.h>
void main() 
{
    int num1,num2,num3,num4,max;

    printf("Enter the first number = ");
    scanf("%d",&num1);
    printf("Enter the second number = ");
    scanf("%d",&num2);
    printf("Enter the third number = ");
    scanf("%d",&num3);
    printf("Enter the forth number = ");
    scanf("%d",&num4);

    max=num1;

    if(num2>max) 
    {
        max=num2;
    }

    if(num3>max) 
    {
        max=num3;
    }

    if(num4>max) 
    {
        max=num4;
    }

    printf("The maximum number is = %d\n",max);
}