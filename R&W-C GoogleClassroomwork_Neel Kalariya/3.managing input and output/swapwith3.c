/*wap to swap two variables (with using third variable)*/
#include<stdio.h>
void main()
{
    int a,b,c;

    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf("a = %d and b = %d\n",a,b);
}