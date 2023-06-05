/*wap to take marks of seven subject from user and find percentage.*/
#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,g,total;
	float per;

	printf("Enter first sub. marks = ");
	scanf("%d",&a);
	printf("Enter second sub. marks = ");
	scanf("%d",&b);
	printf("Enter third sub. marks = ");
	scanf("%d",&c);
	printf("Enter forth sub. marks = ");
	scanf("%d",&d);
	printf("Enter fifth sub. marks = ");
	scanf("%d",&e);
	printf("Enter sixth sub. marks = ");
	scanf("%d",&f);
	printf("Enter seventh sub. marks = ");
	scanf("%d",&g);

	total=a+b+c+d+e+f+g;
	printf("Total of sujects marks = %d",total);

	per=total/7;
	printf("\nPercentage is = %.2f",per);

	if(per>=50 && per<=59)
	{
		printf("\nGrade C");
	}
	else if(per>=60 && per<=69)
	{
		printf("\nGrade B");
	}
	else if(per>=70 && per<=79)
	{
		printf("\nGrade A");
	}
	else if(per>=79 && per<=89)
	{
		printf("\nExcelent");
	}
	else if(per>=89 && per<=99)
	{
		printf("\n1st Class");
	}
	else
	{
		printf("\nTry Next Time...:)");
	}
}