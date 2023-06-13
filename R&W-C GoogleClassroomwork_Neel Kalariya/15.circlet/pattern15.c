/*wap to make pattern using for loop*/
#include<stdio.h>
void main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d ",j);
        }

        for(int k=1;k<=5-i;k++)
        {
            printf("   ");
        }
 
        for(j=1;j<=5-i;j++)
        {
            printf("   ");
        }
        for(int k=i;k>=1;k--)
        {
            printf(" %d ",k);
        }

        printf("\n");
    }
}