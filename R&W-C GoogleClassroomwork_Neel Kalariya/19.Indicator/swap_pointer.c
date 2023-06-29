/*C program to swap two numbers using pointers.*/
#include<stdio.h>
void swap(int *a,int *b) 
{
    int temp =*a;
    *a = *b;
    *b = temp;
}
void main() 
{
    int num1,num2;
    
    printf("Enter the first number = ");
    scanf("%d",&num1);
    
    printf("Enter the second number = ");
    scanf("%d",&num2);
        
    swap(&num1,&num2);
    
    printf("swapped numbers : num1 = %d, num2 = %d\n",num1,num2);
}