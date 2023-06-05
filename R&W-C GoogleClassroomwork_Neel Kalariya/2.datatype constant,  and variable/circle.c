/*wap to find area of circle*/
#include<stdio.h>
#include<math.h>
#define pi 3.14
void main()
{
	float r,area;
	printf("Enter value of r = ");
	scanf("%f",&r);

	area=pi*pow(r,2);

	printf("The area of circle is = %f",area);
}