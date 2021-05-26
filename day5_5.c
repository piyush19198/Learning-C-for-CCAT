/*
Write a program to display number of days in the given year. Check
condition for leap year. A year is a leap year if it is divisible by 4 but
not by 100, except that years divisible by 400 are leap years.
    a. Without using logical operators
    b. Using logical operators
    c. Conditional operator
*/

#include<stdio.h>

int main(void)
{
    int y;

    printf("Enter a year : ");
    scanf("%d",&y);

    if (y % 400 == 0) 
    {
      printf("%d is a leap year.", y);
    }
    // not a leap year if divisible by 100
    // but not divisible by 400
    else
    { 
        if (y % 100 == 0) 
        {
            printf("%d is not a leap year.", y);
        }
        // leap year if not divisible by 100
        // but divisible by 4
        else
        { 
            if (y % 4 == 0) 
            {
                printf("%d is a leap year.", y);
            }
            // all other years are not leap years
            else {
                printf("%d is not a leap year.", y);
            }
        }    
    }
    return 0;
}