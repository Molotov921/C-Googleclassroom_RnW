/*wap to find area of triangle*/
#include<stdio.h>
void main()
{
	float h,b,area;
	printf("Enter value of h = ");
	scanf("%f",&h);
	printf("Enter value of b = ");
	scanf("%f",&b);

	area=(h*b)/2;

	printf("The area of triangle is %f",area);
}