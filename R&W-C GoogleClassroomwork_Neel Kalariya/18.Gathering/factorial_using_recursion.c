/*C program to find factorial of number using recursion.*/
#include<stdio.h>
unsigned long long factorial(int n);
void main() 
{
    int num;

    printf("Enter a number = ");
    scanf("%d",&num);

    unsigned long long result=factorial(num);

    printf("Factorial of %d = %llu\n",num,result);
}
unsigned long long factorial(int n) 
{
    if (n==0) 
    {
        return 1;
    } 
    else 
    {
        return n*factorial(n-1);
    }
}