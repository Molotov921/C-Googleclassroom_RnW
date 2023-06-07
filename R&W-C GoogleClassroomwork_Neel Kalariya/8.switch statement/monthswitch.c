/*wap to print month name using switch statements*/
#include<stdio.h>
void main() 
{
    char ch;

    printf("Enter the month number = ");
    scanf("%c",&char);

    switch(ch) 
    {
        case 'j':
        case 'J':    
            printf("January\n");
            break;
        case 'f':
        case 'F':    
            printf("February\n");
            break;
        case 'm':
        case 'M':    
            printf("March\n");
            break;
        case 'a':
        case 'A':    
            printf("April\n");
            break;
        case 'y':
        case 'Y':    
            printf("May\n");
            break;
        case 'n':
        case 'N':    
            printf("June\n");
            break;
        case 'l':
        case 'L':    
            printf("July\n");
            break;
        case 'g':
        case 'G':    
            printf("August\n");
            break;
        case 's':
        case 'S':    
            printf("September\n");
            break;
        case 'o':
        case 'O':    
            printf("October\n");
            break;
        case 'v':
        case 'V':    
            printf("November\n");
            break;
        case 'd':
        case 'D':    
            printf("December\n");
            break;
        default:
            printf("Invalid month number\n");
            break;
    }
}
