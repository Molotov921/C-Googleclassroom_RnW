/*C program to create a file and write data into file.*/
#include<stdio.h>
void main() 
{
    FILE *file;
    char data[100];

    file=fopen("Hello.txt","w");

    if(file == NULL) 
    {
        printf("File cannot be created or opened.\n");
        return;
    }

    printf("Enter data to write into the file = ");
    fgets(data,sizeof(data),stdin);

    fprintf(file,"%s",data);

    fclose(file);
}