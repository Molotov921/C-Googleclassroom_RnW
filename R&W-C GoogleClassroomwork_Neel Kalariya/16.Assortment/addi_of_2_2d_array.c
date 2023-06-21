/*WAP to find perform addition of two 2D array & store it into another.*/
#include<stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100
void main() 
{
    int array1[MAX_ROWS][MAX_COLS],array2[MAX_ROWS][MAX_COLS],result[MAX_ROWS][MAX_COLS];
    int rows,cols;

    printf("Enter the number of rows and columns in the arrays (up to %d rows and %d columns) = ",MAX_ROWS,MAX_COLS);
    scanf("%d %d",&rows,&cols);

    printf("Enter the elements of the first array =\n");
    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < cols; j++) 
        {
            scanf("%d",&array1[i][j]);
        }
    }

    printf("Enter the elements of the second array =\n");
    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < cols; j++) 
        {
            scanf("%d",&array2[i][j]);
        }
    }

    printf("Resultant array after addition =\n");
    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < cols; j++) 
        {
            result[i][j]=array1[i][j]+array2[i][j];
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}