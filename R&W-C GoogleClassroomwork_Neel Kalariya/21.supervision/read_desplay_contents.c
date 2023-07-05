/*C program to read a file and display its contents.*/
#include<stdio.h>
void main() 
{
    FILE *file;
    char ch;

    file=fopen("Hello.txt","r");

    if(file == NULL) 
    {
        printf("File not found or cannot be opened.\n");
        return;
    }

    printf("Contents of the file:\n");

    while((ch = fgetc(file)) != EOF) 
    {
        printf("%c",ch);
    }

    fclose(file);
}