/*wap to make pattern using for loop*/
#include<stdio.h>
void main() 
{
    int n=5;

    for (int i=n;i>=1;i--) 
    {
        for(int j=n;j>=i;j--) 
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}