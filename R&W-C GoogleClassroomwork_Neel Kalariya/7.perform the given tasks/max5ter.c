/*wap to Find max. from 5 using ternary operator*/
#include<stdio.h>
void main() 
{
    int a,b,c,d,e,max;

    printf("Enter the first number a = ");
    scanf("%d",&a);
    printf("Enter the second number b = ");
    scanf("%d",&b);
    printf("Enter the third number c = ");
    scanf("%d",&c);
    printf("Enter the fourth number d = ");
    scanf("%d",&d);
    printf("Enter the fifth number e = ");
    scanf("%d",&e);

    max=(a>b)?((a>c)?((a>d)?((a>e)?a:e):((d>e)?d:e)):((c>d)?((c>e)?c:e):((d>e)?d:e))):((b>c)?((b>d)?((b>e)?b:e):((d>e)?d:e)):((c>d)?((c>e)?c:e):((d>e)?d:e)));

    printf("Maximum number is = %d\n",max);
}