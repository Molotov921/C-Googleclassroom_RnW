/*Write C program to count number of digits in a number.*/
#include<stdio.h>
#include<string.h>
void main() 
{
    char number[1000];
    int count;

    printf("Enter a number = ");
    scanf("%s",number);

    count=strlen(number);

    printf("Number of digits = %d\n",count);
}