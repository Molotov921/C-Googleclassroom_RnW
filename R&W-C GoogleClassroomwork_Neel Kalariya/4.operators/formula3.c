/*wap to find the answer given formula (x+y)3 */
#include<stdio.h>
void main()
{
	int x,y,ans;
	printf("Enter the value of x = ");
	scanf("%d",&x);
	printf("Enter the value of y = ");
	scanf("%d",&y);

	ans=(x+y)*(x+y)*(x+y);

	printf("The ans is = %d",ans);
} 