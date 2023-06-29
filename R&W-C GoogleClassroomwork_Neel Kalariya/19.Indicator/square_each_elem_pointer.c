/*WAP to find square of each element using Pointer.*/
#include<stdio.h>
void squareElements(int *arr,int size) 
{
    for(int i = 0; i < size; i++) 
    {
        *(arr + i) = *(arr + i) * *(arr + i);
    }
}
void printArray(int *arr,int size) 
{
    for(int i = 0; i < size; i++) 
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
}
void main() 
{
    int arr[5];
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Enter 5 integer values:\n");
    for(int i = 0; i < size; i++) 
    {
        scanf("%d",&arr[i]);
    }

    printf("Original array: ");
    printArray(arr,size);

    squareElements(arr,size);

    printf("Squared array: ");
    printArray(arr,size);
}