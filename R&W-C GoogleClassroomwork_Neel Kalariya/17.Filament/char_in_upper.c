/*WAP to convert given character in uppercase.*/
#include<stdio.h>
#include<ctype.h>
void main() 
{
    char ch;
    
    printf("Enter a character = ");
    scanf("%c",&ch);
    
    ch=toupper(ch);
    
    printf("Uppercase character = %c\n",ch);
}