/*wap to find max. from given 2 no. using ternary operator*/
#include<stdio.h>
void main() 
{
    int a,b,max;
    
    printf("Enter the first number a = ");
    scanf("%d",&a);
    printf("Enter the second number b = ");
    scanf("%d",&b);

    max=(a>b)?a:b;

    printf("Maximum number is = %d\n",max);
}