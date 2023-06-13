/*Write C program to calculate factorial of a number.*/
#include<stdio.h>

long long factorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    }

    return number * factorial(number - 1);
}

void main() 
{
    int number;

    printf("Enter a number = ");
    scanf("%d",&number);

    if(number<0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else 
    {
        long long result = factorial(number);
        printf("Factorial of %d is %lld\n",number,result);
    }
}