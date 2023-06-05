/*wap to find the answer given formula pow(x-y-z,2)*/
#include<stdio.h>
#include<math.h>
void main()
{
	int x,y,z,ans;
	printf("Enter the value of x = ");
	scanf("%d",&x);
	printf("Enter the value of y = ");
	scanf("%d",&y);
	printf("Enter the value of z = ");
	scanf("%d",&z);

	ans=pow(x-y-z,2);

	printf("The ans is = %d",ans);
} 