/*wap to make pattern using for loop*/
#include<stdio.h>
void main() 
{
    int n=5;

    for(int i=1;i<=n;i++) 
    {
        for(int k=1;k<i;k++) 
        {
            printf("   ");
        }

        for(int j=i;j<=n;j++) 
        {
            printf("%2d ",j);
        }

        printf("\n");
    }
}