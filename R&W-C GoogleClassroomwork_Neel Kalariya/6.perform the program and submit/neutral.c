/*wap to Find if a given no. is neutral or not using ladder if else*/
#include<stdio.h>
void main()
{
    int number;

    printf("Enter the number : ");
    scanf("%d",&number);

    if (number > 0) 
    {
        printf("The number is positive.\n");
    } 
    else if (number < 0) 
    {
        printf("The number is negative.\n");
    } 
    else 
    {
        printf("The number is neutral.");
    }
}