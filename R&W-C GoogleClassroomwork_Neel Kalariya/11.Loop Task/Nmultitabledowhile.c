/*wap to print the multiplication table of N using do while loop.*/
#include<stdio.h>
void main()
{
    int N;
    printf("Enter the value of N = ");
    scanf("%d",&N);

    int i=1;

    printf("Multiplication table of %d = \n",N);

    do 
    {
        printf("%d x %d = %d\n",N,i,N * i);
        i++;
    } 
    while(i<=10);
}