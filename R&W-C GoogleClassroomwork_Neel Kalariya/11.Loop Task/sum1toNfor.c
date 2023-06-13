/*wap to print sum 1 to N using for loop.*/
#include<stdio.h>
void main() 
{
    int N,sum=0;

    printf("Enter the value of N = ");
    scanf("%d",&N);

    for(int i=1;i<=N;i++) 
    {
        sum += i;
    }

    printf("The sum of numbers from 1 to %d is %d\n",N,sum);
}