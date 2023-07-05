/*C program to write even, odd and prime numbers to separate file.*/
#include<stdio.h>
int isPrime(int num) 
{
    if(num <= 1)
		return 0;

    for(int i = 2; i * i <= num; i++) 
    {
        if(num % i == 0)
           return 0;
    }

    return 1;
}
void main() 
{
    int start,end;

    printf("Enter the range of numbers (start end) = ");
    scanf("%d %d",&start,&end);

    FILE *evenFile=fopen("even_numbers.txt","w");
    FILE *oddFile=fopen("odd_numbers.txt","w");
    FILE *primeFile=fopen("prime_numbers.txt","w");

    if(evenFile == NULL || oddFile == NULL || primeFile == NULL) 
    {
        printf("Files cannot be created or opened.\n");
        return;
    }

    for(int i = start; i <= end; i++) 
    {
        if(i % 2 == 0)
        {
            fprintf(evenFile,"%d\n",i);
        }
        else
        {
            fprintf(oddFile,"%d\n",i);
        }

        if(isPrime(i))
        {
            fprintf(primeFile,"%d\n",i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);
    fclose(primeFile);

    printf("Numbers have been written to separate files.\n");
}