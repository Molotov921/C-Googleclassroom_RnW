/*wap to print 1 to N using while loop.*/
#include<stdio.h>
void main() 
{
    int N;
    printf("Enter a number N = ");
    scanf("%d",&N);

    int i=1;

    while(i<=N) 
    {
        printf("%d ",i);
        i++;
    }
}