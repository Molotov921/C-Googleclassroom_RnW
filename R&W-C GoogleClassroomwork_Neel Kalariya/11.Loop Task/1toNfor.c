/*wap to Print 1 to N using for loop.*/
#include<stdio.h>
void main() 
{
    int i,N;

    printf("Enter the value of N = ");
    scanf("%d",&N);

    for(i=1;i<=N;i++) 
    {
        printf("%d ",i);
    }
}