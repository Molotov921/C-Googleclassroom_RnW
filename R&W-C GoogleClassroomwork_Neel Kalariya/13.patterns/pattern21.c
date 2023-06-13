/*wap to print pattern using nested for loop.*/
#include<stdio.h>
void main() 
{
    int n=5;
    for(int i=0;i<n;i++) 
    {
        char ch='A';
        for(int j = 0; j <= i; j++) 
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}