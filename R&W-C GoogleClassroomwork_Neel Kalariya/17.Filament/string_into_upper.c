/*Wap to convert string into uppercase.*/
#include<stdio.h>
#include<ctype.h>
void main() 
{
    char str[100];
    
    printf("Enter a string = ");
    gets(str);
    
    for (int i = 0; str[i] != '\0'; i++) 
    {
        str[i]=toupper(str[i]);
    }
    
    printf("Uppercase string = %s\n",str);
}