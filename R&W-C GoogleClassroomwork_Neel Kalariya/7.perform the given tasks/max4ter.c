/*wap to Find max. from 4 using ternary operator*/
#include<stdio.h>
void main() 
{
    int a,b,c,d,max;

    printf("Enter the first number a = ");
    scanf("%d",&a);
    printf("Enter the second number b = ");
    scanf("%d",&b);
    printf("Enter the third number c = ");
    scanf("%d",&c);
    printf("Enter the fourth number d = ");
    scanf("%d",&d);

    max=(a>b)?((a>c)?((a>d)?a:d):((c>d)?c:d)):((b>c)?((b>d)?b:d):((c>d)?c:d));

    printf("Maximum number is = %d\n",max);
}