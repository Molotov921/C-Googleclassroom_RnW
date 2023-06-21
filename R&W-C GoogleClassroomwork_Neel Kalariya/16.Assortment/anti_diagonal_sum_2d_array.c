/*WAP to perform anti-diagonal sum of 2D array.*/
#include<stdio.h>
#define MAX_SIZE 100
void main() 
{
    int array[MAX_SIZE][MAX_SIZE];
    int size;

    printf("Enter the size of the square array (up to %d) = ",MAX_SIZE);
    scanf("%d",&size);

    printf("Enter the elements of the array =\n");
    for(int i = 0; i < size; i++) 
    {
        for(int j = 0; j < size; j++) 
        {
            scanf("%d",&array[i][j]);
        }
    }

    int antiDiagonalSum=0;
    for(int i = 0; i < size; i++) 
    {
        antiDiagonalSum+=array[i][size-1-i];
    }

    printf("Anti-diagonal sum = %d\n",antiDiagonalSum);
}