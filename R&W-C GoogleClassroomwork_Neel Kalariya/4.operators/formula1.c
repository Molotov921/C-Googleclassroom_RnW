/*wap to find the answer given formula pow(x+y,2)*/
#include<stdio.h>
#include<math.h>
void main()
{
	int x,y,ans;
	printf("Enter the value of x = ");
	scanf("%d",&x);
	printf("Enter the value of y = ");
	scanf("%d",&y);

	ans=pow(x+y,2);

	printf("The ans is = %d",ans);
} 