/*wap to print even no. from N to 1 using while loop.*/
#include<stdio.h>
void main() 
{
    int N;
    printf("Enter a number N = ");
    scanf("%d",&N);

    int i=N; 

    while(i>=1) 
    { 
        if(i % 2 == 0) 
        {

            printf("%d ", i);
        }
        i--; 
    }
}