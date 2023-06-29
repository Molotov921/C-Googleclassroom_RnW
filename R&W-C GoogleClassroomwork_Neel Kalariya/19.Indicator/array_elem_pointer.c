/*C program to input and print array elements using pointers.*/
#include<stdio.h>
#define MAX_SIZE 100

void inputArray(int *arr,int size) 
{
    printf("Enter the elements of the array =\n");
    
    for (int i = 0; i < size; i++) 
    {
        scanf("%d",arr + i);
    }
}

void printArray(int *arr,int size) 
{
    printf("The array elements are =\n");
    
    for (int i = 0; i < size; i++) 
    {
        printf("%d ",*(arr + i));
    }
    
    printf("\n");
}

void main() 
{
    int arr[MAX_SIZE];
    int size;
    
    printf("Enter the size of the array = ");
    scanf("%d",&size);
    
    inputArray(arr,size);
    printArray(arr,size);
}