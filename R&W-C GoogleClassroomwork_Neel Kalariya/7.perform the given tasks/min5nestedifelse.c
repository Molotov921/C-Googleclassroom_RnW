/*wap to Find min. from given 5 no. using nested if else*/
#include<stdio.h>
void main() 
{
    int a,b,c,d,e,min;

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

    min=a; 

    if(b<min) 
    {
        min=b;
    }
    if(c<min) 
    {
        min=c;
    }
    if(d<min) 
    {
        min=d;
    }
    if(e<min)
    {
        min=e;
    }

    printf("Minimum number is = %d\n",min);
}