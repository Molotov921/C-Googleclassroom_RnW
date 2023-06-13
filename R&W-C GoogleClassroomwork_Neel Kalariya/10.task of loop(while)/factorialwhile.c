/*wap to calculate the factorial of N. using while loop.*/
#include<stdio.h>
void main() 
{
    int N;
    printf("Enter a number N = ");
    scanf("%d",&N); 

    unsigned long long factorial = 1; 
    int i=1; 

    while(i<=N) 
    { 
        factorial *= i; 
        i++; 
    }

    printf("The factorial of %d is = %llu\n",N,factorial); 
}