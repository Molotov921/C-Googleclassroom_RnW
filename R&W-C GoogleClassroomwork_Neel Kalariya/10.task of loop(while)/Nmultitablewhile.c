/*wap to print the multiplication table of N using while loop.*/
#include<stdio.h>
void main() 
{
    unsigned long long N;
    printf("Enter a number N = ");
    scanf("%llu",&N); 

    unsigned long long i=1;

    while(i<=10) 
    {
        printf("%llu x %llu = %llu\n",N,i,N * i); 
        i++;
    }
}