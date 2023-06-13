/*Write C program to find sum of first and last digit of a number.*/
#include<stdio.h>
void main() 
{
    int number,firstDigit,lastDigit,sum;

    printf("Enter a number = ");
    scanf("%d",&number);

    firstDigit=number;
    while(firstDigit>=10) 
    {
        firstDigit /= 10;
    }

    lastDigit=number%10;

    sum=firstDigit+lastDigit;

    printf("Sum of first and last digit = %d\n",sum);
}