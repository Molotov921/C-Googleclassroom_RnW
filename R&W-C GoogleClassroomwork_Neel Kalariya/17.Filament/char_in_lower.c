/*WAP to convert given character in lowercase.*/
#include<stdio.h>
#include<ctype.h>
void main() 
{
    char ch;
    
    printf("Enter a character = ");
    scanf("%c",&ch);
    
    ch=tolower(ch);
    
    printf("Lowercase character = %c\n",ch);
}