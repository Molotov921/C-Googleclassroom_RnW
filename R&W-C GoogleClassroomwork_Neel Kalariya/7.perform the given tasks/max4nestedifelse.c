/*wap to Find max. from given 4 no. using nested if else*/
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

    if (a>=b && a>=c && a>=d) 
    {
        max=a;
    } 
    else if (b>=a && b>=c && b>=d) 
    {
        max=b;
    }
    else if (c>=a && c>=b && c>=d) 
    {
        max=c;
    }
    else 
    {
        max=d;
    }

    printf("Maximum number is = %d\n", max);
}