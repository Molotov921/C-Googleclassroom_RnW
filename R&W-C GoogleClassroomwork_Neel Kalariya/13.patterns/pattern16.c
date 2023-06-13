/*wap to print pattern using nested for loop.*/
#include<stdio.h>
void main() 
{
    int n=5;
    int start=1;
    for(int i=n;i>=1;i--) 
    {
        for(int j=1;j<=i;j++) 
        {
            printf("%d ",start);
            start=1-start;
        }
        printf("\n");
        if(i % 2 == 0) 
        {
            start=1-start;
        }
    }
}