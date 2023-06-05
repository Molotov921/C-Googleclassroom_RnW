/*wap to find perameter of circle*/
#include<stdio.h>
#define pi 3.14
void main()
{
	float r,perameter;
	printf("Enter value of r = ");
	scanf("%f",&r);

	perameter=2*pi*r;

	printf("The perameter of circle is = %f",perameter);
}