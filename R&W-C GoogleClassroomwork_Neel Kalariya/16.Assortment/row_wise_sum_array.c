/*WAP to perform row-wise sum of 2D array.*/
#include<stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100
void main() 
{
    int array[MAX_ROWS][MAX_COLS];
    int rows,cols;

    printf("Enter the number of rows and columns in the array (up to %d rows and %d columns) = ",MAX_ROWS,MAX_COLS);
    scanf("%d %d",&rows,&cols);

    printf("Enter the elements of the array =\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++) 
        {
            scanf("%d",&array[i][j]);
        }
    }

    printf("Row-wise sums =\n");
    for(int i = 0; i < rows; i++) 
    {
        int rowSum=0;
        for(int j = 0; j < cols; j++) 
        {
            rowSum+=array[i][j];
        }
        printf("Sum of Row %d = %d\n",i+1,rowSum);
    }
}