/*WAP to find cube of given no. using UDF.*/
#include<stdio.h>
int cube(int num);
void main() 
{
    int number;
    int cubeResult;

    printf("Enter a number = ");
    scanf("%d",&number);

    cubeResult=cube(number);

    printf("Cube of %d = %d\n",number,cubeResult);
}

int cube(int num) 
{
    return num*num*num;
}