/*wap to calculate the factorial of N. using for loop.*/
#include<stdio.h>
void main() 
{
    int N;
    unsigned long long factorial = 1;

    printf("Enter a positive integer = ");
    scanf("%d",&N);

    for(int i=1;i<=N;i++) 
    {
        factorial *= i;
    }

    printf("Factorial of %d = %llu\n",N,factorial);
}