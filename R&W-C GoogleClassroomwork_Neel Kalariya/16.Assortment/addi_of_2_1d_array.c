/*WAP to find perform addition of two 1D array & store it into another.*/
#include<stdio.h>
#define MAX_SIZE 100
void main() 
{
    int array1[MAX_SIZE],array2[MAX_SIZE],result[MAX_SIZE];
    int n;

    printf("Enter the number of elements in the arrays (up to %d) = ",MAX_SIZE);
    scanf("%d",&n);

    printf("Enter %d elements of the first array =\n",n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d",&array1[i]);
    }

    printf("Enter %d elements of the second array =\n",n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d",&array2[i]);
    }

    for(int i = 0; i < n; i++) 
    {
        result[i]=array1[i]+array2[i];
    }

    printf("Resultant array after addition =\n");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ",result[i]);
    }
    printf("\n");
}