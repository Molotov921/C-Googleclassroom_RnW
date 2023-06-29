/*C program to reverse an array using pointers.*/
#include<stdio.h>
#define MAX_SIZE 100

void reverseArray(int *arr,int size) 
{
    int *start = arr;
    int *end = arr+size-1;

    while(start<end) 
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void inputArray(int *arr,int size) 
{
    printf("Enter the elements of the array =\n");
    for(int i = 0; i < size; i++) 
    {
        scanf("%d",arr+i);
    }
}

void printArray(int *arr,int size) 
{
    printf("The array elements are:\n");
    for(int i = 0; i < size; i++) 
    {
        printf("%d ",*(arr+i));
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

    printf("Original array:\n");
    printArray(arr,size);

    reverseArray(arr,size);

    printf("Reversed array:\n");
    printArray(arr,size);
}