/*wap to find the answer given formula (x-y-z)3 */
#include<stdio.h>
void main()
{
	int x,y,z,ans;
	printf("Enter the value of x = ");
	scanf("%d",&x);
	printf("Enter the value of y = ");
	scanf("%d",&y);
	printf("Enter the value of z = ");
	scanf("%d",&z);

	ans=(x-y-z)*(x-y-z)*(x-y-z);

	printf("The ans is = %d",ans);
} 