/*wap to print odd no. from 1 to N using for loop.*/
#include<stdio.h>
void main() 
{
    int N,i;

    printf("Enter the value of N = ");
    scanf("%d",&N);

    printf("Odd numbers from 1 to %d are = ",N);

    for(i=1;i<=N;i+=2) 
    {
        printf("%d ",i);
    }
}