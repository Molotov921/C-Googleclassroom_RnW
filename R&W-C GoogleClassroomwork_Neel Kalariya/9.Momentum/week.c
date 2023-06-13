/*Write C program use switch statement. Display Monday to Sunday.*/
#include<stdio.h>
void main() 
{
    char day;

    printf("Enter a letter /m/M/t/T/W/w/h/H/f/F/s/S/n/N = ");
    scanf("%c",&day);

    switch(day) 
    {
        case 'M':
        case 'm':
            printf("Monday\n");
            break;
        case 'T':
        case 't':
            printf("Tuesday\n");
            break;
        case 'W':
        case 'w':
            printf("Wednesday\n");
            break;
        case 'H':
        case 'h':
            printf("Thursday\n");
            break;
        case 'F':
        case 'f':
            printf("Friday\n");
            break;
        case 'S':
        case 's':
            printf("Saturday\n");
            break;
        case 'N':
        case 'n':
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a letter between /m/M/t/T/W/w/h/H/f/F/s/S/n/N \n");
            break;
    }
}