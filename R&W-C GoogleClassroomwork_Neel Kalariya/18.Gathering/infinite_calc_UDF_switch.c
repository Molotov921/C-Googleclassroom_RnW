/*WAP to create infinite calc using UDF, switch case.*/
#include<stdio.h>
int add(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);
int divide(int a,int b);
void main() 
{
    int choice,num1,num2;
    int result;

    while(1) 
    {
        printf("Enter the operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Choice: ");
        scanf("%d",&choice);

        if(choice==5) 
        {
            printf("Exiting the program.\n");
            break;
        }

        printf("Enter two numbers = ");
        scanf("%d %d",&num1,&num2);

        switch(choice) 
        {
            case 1:
                result=add(num1,num2);
                printf("Result = %d\n",result);
                break;
            case 2:
                result=subtract(num1,num2);
                printf("Result = %d\n",result);
                break;
            case 3:
                result=multiply(num1,num2);
                printf("Result = %d\n",result);
                break;
            case 4:
                if(num2!=0) 
                {
                    result=divide(num1,num2);
                    printf("Result = %d\n",result);
                } 
                else 
                {
                    printf("Error: Division by zero.\n");
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

        printf("\n");
    }
}

int add(int a,int b) 
{
    return a+b;
}

int subtract(int a,int b) 
{
    return a-b;
}

int multiply(int a,int b) 
{
    return a*b;
}

int divide(int a,int b) 
{
    return a/b;
}