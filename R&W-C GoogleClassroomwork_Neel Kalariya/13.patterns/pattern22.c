/*wap to print pattern using nested for loop.*/
#include<stdio.h>
void main() 
{
    int n=5;
    char ch='A';
    int count=0;

    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<=i;j++) 
        {
            printf("%c ",ch+count);
            count++;
        }
        printf("\n");
    }
}