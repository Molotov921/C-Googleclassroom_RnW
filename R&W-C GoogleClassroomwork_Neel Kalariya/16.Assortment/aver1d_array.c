/*WAP to find average of 1D array*/
#include<stdio.h>
#define MAX_SIZE 100
void main() 
{
    int array[MAX_SIZE];
    int n,i;
    float sum=0,average;

    printf("Enter the number of elements in the array (up to %d) = ",MAX_SIZE);
    scanf("%d",&n);

    if(n <= 0 || n > MAX_SIZE) 
    {
        printf("Invalid number of elements. Please enter a positive number up to %d.\n",MAX_SIZE);
        return;
    }
    printf("Enter %d elements of the array =\n",n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d",&array[i]);
        sum+=array[i];
    }

    average=sum/n;

    printf("Average of the array is = %.2f\n",average);
}