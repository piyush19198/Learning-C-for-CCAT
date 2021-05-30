/*
Write a function to print a given character for a given number of times
*/
#include <stdio.h>
void printchar (char ch, int numberOfChars, int numberOfLines);

int main (void)
{
    char uchar;
    int lines,times;
    printf ("Enter a character, number of times in a line, and number of lines:\n");
    while ((scanf ("%c%d%d", &uchar, &times, &lines)) == 3)
    {
        printchar (uchar, times, lines);
    }
    return 0;
}

void printchar (char ch, int numberOfChars, int numberOfLines)
{
    int x;
    int y = 0;

    while (++y <= numberOfLines)
    {
            for (x = 0; x<numberOfChars; x++)
            {
                printf ("%c", ch);
            }
            printf ("\n");
    }
}