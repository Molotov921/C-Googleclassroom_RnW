/*wap to calculate the factorial of N. using do while loop.*/
#include<stdio.h>
void main() 
{
    int N;
    printf("Enter the value of N = ");
    scanf("%d",&N);

    int factorial=1;
    int i=1;

    do 
    {
        factorial *= i;
        i++;
    }
    while(i<=N);

    printf("Factorial of %d is = %d\n",N,factorial);
}