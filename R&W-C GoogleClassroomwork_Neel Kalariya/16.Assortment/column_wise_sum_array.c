/*WAP to perform column-wise sum of 2D array.*/
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

    printf("Column-wise sums =\n");
    for(int j = 0; j < cols; j++) 
    {
        int colSum=0;
        for(int i = 0; i < rows; i++) 
        {
            colSum+=array[i][j];
        }
        printf("Sum of Column %d = %d\n",j+1,colSum);
    }
}