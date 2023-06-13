/*wap to print the multiplication table of N using for loop.*/
#include<stdio.h>
void main() 
{
    int N;

    printf("Enter a number = ");
    scanf("%d",&N);

    printf("Multiplication table of %d = \n",N);
    
    for(int i=1;i<=10;i++) 
    {
        printf("%d x %d = %d\n",N,i,N * i);
    }
}