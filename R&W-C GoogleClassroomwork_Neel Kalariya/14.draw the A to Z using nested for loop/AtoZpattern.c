/*Draw the A to Z alphabets in pattern using nested for loop and if condition*/
#include<stdio.h>
void main()
{
    int i,j;

    printf("\n\n");

    for(i = 1; i <= 39; i++)
    {
        for(j = 1; j <= 35; j++)
        {
            if(
                /* A */
                i == 2 && (j > 1 && j < 5) || i == 4 && (j > 1 && j < 5) || i == 5 && (j > 1 && j < 5)  ||
                j == 6 && (i >= 1 && i <= 5)  ||

                /* B */
                i == 1 && (j == 11) || i == 2 && (j > 7 && j < 11) || i == 3 && (j == 11) || i == 4 && (j > 7 && j < 11) || i == 5 && (j == 11)  ||
                j == 12 && (i >= 1 && i <= 5) ||

                /* C */
                i == 1 && (j == 13) || i == 5 && (j == 13) || i == 2 && (j > 13 && j < 18) || i == 3 && (j > 13 && j < 18) || i == 4 && (j > 13 && j < 18) ||
                j == 18 && (i >= 1 && i <= 5) ||

                /* D */
                i == 1 && (j >= 22 && j <= 23) || i == 2 && (j >= 20 && j <= 21) || i == 2 && j == 23 || i == 3 && (j >= 20 && j <= 22) || i == 5 && (j >= 22 && j <= 23) || i == 4 && j == 23 || i == 4 && (j >= 20 && j <= 21) ||
                j == 24 && (i >= 1 && i <= 5) ||

                /* E */
                i == 2 && (j > 25 && j <= 29) || i == 4 && (j > 25 && j <= 29) ||
                j == 30 && (i >= 1 && i <= 5) ||

                /* F */
                i == 2 && (j > 31 && j <= 35) || i == 3 && j >= 35 || i == 4 && (j > 31 && j <= 35) || i == 5 && (j > 31 && j <= 35) ||

                i == 6 && (j >= 1 && j <= 35) ||
                i == 8 && (j >= 1 && j <= 35) ||

                /* G */
                i == 9 && j == 1 || i == 10 && (j > 1 && j <= 5) || i == 11 && j == 2 || i == 12 && (j == 2 || j == 5) || i == 13 && (j == 1 || j == 4) ||
                j == 6 && (i >= 9 && i <= 13) ||

                /* H */
                i == 9 && (j > 7 && j < 11) || i == 10 && (j > 7 && j < 11) || i == 12 && (j > 7 && j < 11) || i == 13 && (j > 7 && j < 11) ||
                j == 12 && (i >= 9 && i <= 13) ||

                /* I */
                i == 10 && (j >= 13 && j <= 14) || i == 10 && (j >= 16 && j <= 17) || i == 11 && (j >= 13 && j <= 14) || i == 11 && (j >= 16 && j <= 17) || i == 12 && (j >= 13 && j <= 14) || i == 12 && (j >= 16 && j <= 17) ||
                j == 18 && (i >= 9 && i <= 13) ||

                /* J */
                /* j = 19 - 23, i= 9 - 13 */
                i == 10 && (j >= 19 && j <= 20) || i == 10 && (j >= 22 && j <= 23) || i == 11 && (j >= 19 && j <= 20) || i == 11 && (j >= 22 && j <= 23) || i == 12 && j == 20 || i == 12 && (j >= 22 && j <= 23) || i == 13 && j == 19 || i == 13 && (j >= 22 && j <= 23) ||
                j == 24 && (i >= 9 && i <= 13) ||

                /* K */
                /* j = 25 - 29, i = 9 - 13 */
                i == 9 && (j >= 27 && j <= 28) || i == 10 && (j == 27 || j == 29) || i == 11 && (j >= 28 && j <= 29) || i == 12 && (j == 27 || j == 29) || i == 13 && (j == 27 || j == 28) ||
                j == 30 && (i >= 9 && i <= 13) ||

                /* L */
                /* j = 31 - 35, i = 9 - 13 */
                i == 9 && (j >= 33 && j <= 35) || i == 10 && (j >= 33 && j <= 35) || i == 11 && (j >= 33 && j <= 35) || i == 12 && j == 35 || i == 13 && j == 35 ||

                i == 14 && (j >= 1 && j <= 35) ||
                i == 16 && (j >= 1 && j <= 35) ||

                /* M */
                /* j = 1 - 5, i= 17 - 21 */
                i == 17 && (j > 1 && j <= 4) || i == 18 && j == 3 || i == 19 && (j == 2 || j == 4) || i == 20 && (j >= 2 && j <= 4) || i == 21 && (j >= 2 && j <= 4) ||
                j == 6 && (i >= 17 && i <= 21) ||

                /* N */
                /* j = 7 - 11, i= 17 - 21 */
                i == 17 && (j >= 8 && j <= 10) || i == 18 && (j >= 9 && j <= 10) || i == 19 && (j == 8 || j == 10) || i == 20 && (j >= 8 && j <= 9) || i == 21 && (j >= 8 && j <= 10) ||
                j == 12 && (i >= 17 && i <= 21) ||

                /* O */
                /* j = 13 - 17, i= 17 - 21 */
                i == 17 && (j == 13 || j == 17) || j == 14 && (i >= 18 && i <= 20) || j == 15 && (i >= 18 && i <= 20) || j == 16 && (i >= 18 && i <= 20) || i == 21 && (j == 13 || j == 17) ||
                j == 18 && (i >= 17 && i <= 21) ||

                /* P */
                /* j = 19 - 23, i= 17 - 21 */
                i == 17 && j == 23 || i == 18 && (j == 21 || j == 22) || i == 19 && j == 23 || i == 20 && (j >= 21 && j <= 23) || i == 21 && (j >= 21 && j <= 23) ||
                j == 24 && (i >= 17 && i <= 21) ||

                /* Q */
                /* j = 25 - 29, i = 17 - 21 */
                i == 17 && (j == 25 || j == 29) || i == 18 && (j >= 26 && j <= 28) || i == 19 && (j == 26 || j == 28) || i == 20 && (j == 25 || j == 29) || i == 21 && (j >= 25 && j <= 28) ||
                j == 30 && (i >= 17 && i <= 21) ||

                /* R */
                /* j = 31 - 35, i = 17 - 21 */
                i == 17 && (j == 35) || i == 18 && (j >= 33 && j <= 34) || i == 19 && j == 35 || i == 20 && (j == 33 || j == 35) || i == 21 && (j >= 33 && j <= 34) ||

                i == 22 && (j >= 1 && j <= 35) ||
                i == 24 && (j >= 1 && j <= 35) ||

                /* S */
                /* j = 1 - 5, i= 25 - 29 */
                i == 25 && j == 1 || i == 26 && (j >= 2 && j <= 5) || i == 27 && (j == 1 || j == 5) || i == 28 && (j >= 1 && j <= 4) || i == 29 && j == 5 ||
                j == 6 && (i >= 25 && i <= 29) ||

                /* T */
                /* j = 7 - 11, i= 25 - 29 */
                i == 26 && (j >= 7 && j <= 8) || i == 26 && (j >= 10 && j <= 11) || i == 27 && (j >= 7 && j <= 8) || i == 27 && (j >= 10 && j <= 11) || i == 28 && (j >= 7 && j <= 8) || i == 28 && (j >= 10 && j <= 11) || i == 29 && (j >= 7 && j <= 8) || i == 29 && (j >= 10 && j <= 11) ||
                j == 12 && (i >= 25 && i <= 29) ||

                /* U */
                /* j = 13 - 17, i= 25 - 29 */
                i == 25 && (j > 13 && j < 17) || i == 26 && (j > 13 && j < 17) || i == 27 && (j > 13 && j < 17) || i == 28 && (j > 13 && j < 17) || i == 29 && (j == 13 || j == 17) ||
                j == 18 && (i >= 25 && i <= 29) ||

                /* V */
                /* j = 19 - 23, i= 25 - 29 */
                i == 25 && (j > 19 && j < 23) || i == 26 && (j > 19 && j < 23) || i == 27 && (j > 19 && j < 23) || i == 28 && (j == 19 || j == 21 || j == 23) || i == 29 && (j >= 19 && j <= 20) || i == 29 && (j >= 22 && j <= 23) ||
                j == 24 && (i >= 25 && i <= 29) ||

                /* W */
                /* j = 25 - 29, i = 25 - 29 */
                i == 25 && (j > 25 && j < 29) || i == 26 && (j > 25 && j < 29) || i == 27 && (j == 26 || j == 28) || i == 28 && j == 27 || i == 29 && (j > 25 && j < 29) ||
                j == 30 && (i >= 25 && i <= 29) ||

                /* X */
                /* j = 31 - 35, i = 25 - 29 */
                i == 25 && (j > 31 && j < 35) || i == 26 && (j == 31 || j == 33 || j == 35) || i == 27 && ((j >= 31 && j <= 32) || (j >= 34 && j <= 35)) || i == 29 && (j > 31 && j < 35) || i == 28 && (j == 31 || j == 33 || j == 35) ||

                i == 30 && (j >= 1 && j <= 35) ||
                i == 32 && (j >= 1 && j <= 35) ||

                /* Y */
                /* j = 1 - 5, i= 33 - 37 */
                i == 33 && (j >= 2 && j <= 4) || i == 34 && (j == 1 || j == 3 || j == 5) || i == 35 && (j == 1 || j == 2 || j == 4 || j == 5) || i == 36 && (j == 1 || j == 2 || j == 4 || j == 5) || i == 37 && (j == 1 || j == 2 || j == 4 || j == 5) ||
                j == 6 && (i >= 33 && i <= 37) ||

                /* Z */
                /* j = 7 - 11, i= 33 - 37 */
                i == 34 && (j >= 7 && j <= 9 || j == 11) || i == 35 && (j >= 7 && j <= 8 || j >= 10 && j <= 11) || i == 36 && (j == 7 || j >= 9 && j <= 11) ||
                j == 12 && (i >= 33 && i <= 37) ||

                (j >= 12 && j <= 35) && (i >= 33 && i <= 37) ||

                i == 38 && (j >= 1 && j <= 35) 
            )
            {
                printf("     ");
            }
            else
            {
                printf("  *  ");
            }
        }
        printf("\n\n");
    }
}