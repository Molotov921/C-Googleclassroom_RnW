/*wap to print a pattern using nested for loop*/
#include<stdio.h>
void main() 
{
    int n=5;
    for(int i=1;i<=n;i++) 
    {
        int start=(i % 2 == 0)?0:1;
        for(int j=1;j<=i;j++) 
        {
            printf("%d ",start);
            start=1-start;
        }
        printf("\n");
    }
}