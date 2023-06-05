/*wap to find area of interest*/
#include<stdio.h>
void main()
{
	float principle,r=10,t=1,interest;

	printf("Enter value of principle = ");
	scanf("%f",&principle);

	interest=(principle*r*t)/100;

	printf("The simple interest is = %f",interest);

}