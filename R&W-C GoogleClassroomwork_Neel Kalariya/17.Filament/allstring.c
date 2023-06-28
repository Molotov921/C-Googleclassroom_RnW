/*Wap to use all string functions in single program.*/
#include<stdio.h>
#include<string.h>
void main() 
{
    char str1[100],str2[100];
    
    printf("Enter a string = ");
    gets(str1);
    
    printf("Length of the string = %d\n", strlen(str1));
    
    printf("Copy of the string = %s\n", strcpy(str2, str1));
    
    printf("Concatenation of the string = %s\n", strcat(str1, str2));
    
    printf("Comparison of the strings = %d\n", strcmp(str1, str2));
    
    printf("First occurrence of 'a' in the string = %s\n", strchr(str1,'a'));
    
    printf("Last occurrence of 'e' in the string = %s\n", strrchr(str1,'e'));
    
    printf("Substring starting from index 2 = %s\n", strstr(str1, str2));		
}