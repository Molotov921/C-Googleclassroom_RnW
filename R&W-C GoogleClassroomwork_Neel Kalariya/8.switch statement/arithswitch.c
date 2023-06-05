/*wap to perform various arithmatic task using swith statement*/
#include<stdio.h>
void main()
{
	int a,b;
	char opt;

    printf("Enter the first number a = \n");
    scanf("%d",&a);
    printf("Enter the second number b = \n");
    scanf("%d",&b);
	printf("Enter the operator (+, -, *, /, %): \n");
    scanf("%c",&opt);

    switch(opt) 
    {
        case '+':
            printf("The Addition is = %d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("The subtracion is = %d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("The Multiplication is = %d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) 
            {
                printf("%d / %d = %.2f\n", a, b, (float)a / b);
            } 
            else 
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (b != 0) 
            {
                printf("%d %% %d = %d\n", a, b, a % b);
            } 
            else 
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;  
        default:
            printf("Invalid operator.\n");
            break;
    }   
}