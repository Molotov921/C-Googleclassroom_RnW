/*wap to print N to 1 using do while loop.*/
#include<stdio.h>
void main() 
{
    int N;
    printf("Enter the value of N = ");
    scanf("%d",&N);

    int i=N;

    do 
    {
        printf("%d ",i);
        i--;
    } 
    while(i>=1);   
}