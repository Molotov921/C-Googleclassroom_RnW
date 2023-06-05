/*wap to Find min. no. from given 2 no. using if else*/
#include<stdio.h>
void main()
{
    int a,b,min;

    printf("Enter the first number a : ");
    scanf("%d",&a);
    printf("Enter the second number b : ");
    scanf("%d",&b);

    if (a<b) 
    {
        min = a;
    } else {
        min = b;
    }

    printf("Minimum number : %d\n",min);
}