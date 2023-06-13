/*wap to Print N to 1 using for loop.*/
#include<stdio.h>
void main() 
{
    int N,i;

    printf("Enter the value of N = ");
    scanf("%d",&N);

    for(i=N;i>=1;i--) 
    {
        printf("%d ",i);
    }
}