/*wap to make pattern using for loop*/
#include <stdio.h>
void main()
{
    int i,j;

    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(j=1;j<=(2*(5-i));j++)
        {
            printf("  ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    for(i=2;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(j=1;j<=(2*(5-i));j++)
        {
            printf("  ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}