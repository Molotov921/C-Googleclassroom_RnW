/*C program to append data into a file.*/
#include<stdio.h>
void main() 
{
    FILE *file;
    char data[100];

    file=fopen("Hello.txt","a");

    if(file == NULL) 
    {
        printf("File cannot be opened or created.\n");
        return;
    }

    printf("Enter data to append to the file =\n");
    fgets(data,sizeof(data),stdin);

    fprintf(file,"%s",data);

    fclose(file);

    printf("Data appended to the file successfully.\n");
}