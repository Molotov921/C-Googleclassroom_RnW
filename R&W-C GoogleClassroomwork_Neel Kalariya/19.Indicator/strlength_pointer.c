/*Program to find length of string using pointer*/
#include<stdio.h>
void stringLength(const char *str) 
{
    int length=0;
    
    while(*str!='\0') 
    {
        if(*str!=' ') 
        { 
            length++;
        }
        str++; 
    }
    
    printf("Length of the string = %d\n",length);
}
void main() 
{
    char str[100];
    
    printf("Enter a string = ");
    scanf("%[^\n]",str);
    
    getchar(); 
    
    stringLength(str);
}