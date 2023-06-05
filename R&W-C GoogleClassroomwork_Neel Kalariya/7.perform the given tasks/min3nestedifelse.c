/*wap to Find min. from given 3 no. using nested if else*/
#include<stdio.h>
void main() 
{
    int a,b,c,min;

    printf("Enter the first number a = ");
    scanf("%d",&a);
    printf("Enter the second number b = ");
    scanf("%d",&b);
    printf("Enter the third number c = ");
    scanf("%d",&c);

    if (a<b) 
    {
        if (a<c) 
        {
            min=a;
        }
        else 
        {
            min=c;
        }
    } 
    else 
    {
        if (b<c) 
        {
            min=b;
        } 
        else 
        {
            min=c;
        }
    }

    printf("Minimum number is = %d\n", min);
}