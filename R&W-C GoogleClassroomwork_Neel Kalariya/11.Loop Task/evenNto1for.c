/*wap to print even no. from N to 1 using for loop.*/
#include<stdio.h>
void main() 
{
    int N,i;

    printf("Enter the value of N = ");
    scanf("%d",&N);

    printf("Even numbers from %d to 1 = ", N);

    for(i=N;i>=1;i--) 
    {
        if(i % 2 == 0) 
        {
            printf("%d ",i);
        }
    }
}