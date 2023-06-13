/*wap to print pattern using nested for loop.*/
#include<stdio.h>
void main() 
{
    int n=5;
    for(int i=1;i<=n;i++) 
    {
        int start=1;
        for(int j=1;j<=i;j++) 
        {
            printf("%d ",start);
            start=1-start;
        }
        printf("\n");
    }
}