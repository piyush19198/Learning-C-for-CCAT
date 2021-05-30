/*
Write a program to accept a number and print all factors excluding the
number (using loops)
    Input: 24
    Output: all factors: 1, 2, 3, 4, 6, 8, 12
*/
#include <stdio.h>
int main() 
{
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i) 
    {
        if (num % i == 0) 
        {
            printf("%d ", i);
        }
    }
    return 0;
}