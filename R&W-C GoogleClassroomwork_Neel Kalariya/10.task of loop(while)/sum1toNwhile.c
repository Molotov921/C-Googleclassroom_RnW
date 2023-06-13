/*wap to print sum 1 to N using while loop.*/
#include<stdio.h>
void main() 
{
    int N;
    printf("Enter a number N = ");
    scanf("%d",&N);

    int sum=0; 
    int i=1; 

    while(i<=N) 
    {
        sum += i;
        i++; 
    }

    printf("The sum of numbers from 1 to %d is = %d\n",N,sum);
}