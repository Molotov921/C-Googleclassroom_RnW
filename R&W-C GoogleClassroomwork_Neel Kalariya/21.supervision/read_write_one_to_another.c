/*WAP to read content from one file & write it to another file.*/
#include<stdio.h>
void main() 
{
    FILE *sourceFile, *destinationFile;
    char ch;

    sourceFile=fopen("Hello.txt","r");
    destinationFile=fopen("destination2.txt","w");

    if(sourceFile == NULL || destinationFile == NULL) 
    {
        printf("File cannot be opened or created.\n");
        return;
    }

    while((ch = fgetc(sourceFile)) != EOF) 
    {
        fputc(ch,destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File contents copied successfully.\n");
}