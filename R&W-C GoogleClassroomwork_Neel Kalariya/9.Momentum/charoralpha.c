/*Write C program to input any character and check whether it is alphabet, digit or special character.*/
#include<stdio.h>
void main() 
{
    char ch;

    printf("Enter a character = ");
    scanf("%c",&ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
    {
        printf("'%c' is an alphabet.\n",ch);
    } else if (ch >= '0' && ch <= '9') 
    {
        printf("'%c' is a digit.\n",ch);
    } else 
    {
        printf("'%c' is a special character.\n",ch);
    }
}