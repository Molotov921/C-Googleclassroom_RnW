/*Write C program to print all alphabets from a to z. using do while loop*/
#include<stdio.h>
void main() 
{
    char alphabet='a';

    do 
    {
        printf("%c ",alphabet);
        alphabet++;
    } 
    while(alphabet<='z');
}