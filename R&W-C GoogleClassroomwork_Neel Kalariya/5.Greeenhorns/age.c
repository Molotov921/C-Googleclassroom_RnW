/*wap to take age from user if the age more then 18 then return true other wise false, but without using if condition*/
#include<stdio.h>
void main()
{
	int age;

	printf("Enter the age = ");
	scanf("%d",&age);

	age>=18?printf("You can vote"):printf("You can't vote");
}