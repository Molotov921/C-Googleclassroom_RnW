/*wap to Find max. from 3 using ternary operator*/
#include<stdio.h>
void main() 
{
    int a,b,c,max;

    printf("Enter the first number a = ");
    scanf("%d",&a);
    printf("Enter the second number b = ");
    scanf("%d",&b);
    printf("Enter the third number c = ");
    scanf("%d",&c);

    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    
    printf("Maximum number is = %d\n",max);
}