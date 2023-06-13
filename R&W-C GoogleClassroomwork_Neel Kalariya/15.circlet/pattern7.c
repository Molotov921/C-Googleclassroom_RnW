/*wap to make pattern using for loop*/
#include<stdio.h>
void main() 
{
    int n=5;

    for(int i=1;i<=n;i++) 
    {
        int num=4;
        for(int j=1;j<=2*i;j++) 
        {
            if(j % 2 == 1) 
            {
                printf("%d ",num);
            } 
            else 
            {
                printf("%d ",num + j / 2);
            }
        }
        printf("\n");
    }
}