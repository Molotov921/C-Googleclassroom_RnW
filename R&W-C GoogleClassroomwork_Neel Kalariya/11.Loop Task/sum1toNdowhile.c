/*wap to print sum 1 to N using do while loop.*/
#include<stdio.h>
void main() 
{
    int N;
    printf("Enter the value of N = ");
    scanf("%d",&N);

    int sum=0;
    int i=1;

    do 
    {
        sum += i;
        i++;
    } 
    while(i<=N);

    printf("Sum of numbers from 1 to %d is = %d\n",N,sum);
}