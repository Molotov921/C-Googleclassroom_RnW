/*Write C program to check a number is even or odd using ternary operator.*/
#include<stdio.h>
void main() 
{
    int num;

    printf("Enter a number = ");
    scanf("%d",&num);

    (num%2==0)?printf("%d is even.\n",num):printf("%d is odd.\n",num);
}