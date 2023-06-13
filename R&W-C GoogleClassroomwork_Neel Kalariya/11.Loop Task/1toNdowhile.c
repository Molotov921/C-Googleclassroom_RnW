/*wap to print 1 to N using do while loop.*/
#include<stdio.h>
void main() 
{
    int N;
    printf("Enter the value of N = ");
    scanf("%d",&N);

    int i=1;

    do 
    {
        printf("%d ",i);
        i++;
    } 
    while(i<=N);
}