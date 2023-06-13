/*wap to print a pattern using nested for loop*/
#include<stdio.h>
void main() 
{
    int n=5;
    for(int i=n;i>=1;i--) 
    {
        for(int j=i;j>=1;j--) 
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}