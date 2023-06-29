/*WAP to swap two variables using Pointer.*/
#include<stdio.h>
void swapVariables(int *var1,int *var2) 
{
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}
void main() 
{
    int num1,num2;

    printf("Enter value for num1 = ");
    scanf("%d",&num1);

    printf("Enter value for num2 = ");
    scanf("%d",&num2);

    printf("Before swapping: num1 = %d, num2 = %d\n",num1,num2);

    swapVariables(&num1,&num2);

    printf("After swapping: num1 = %d, num2 = %d\n",num1,num2);
}