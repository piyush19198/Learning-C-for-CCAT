/*
Using For loop & While loop
Write a program to display n terms of Fibonacci series
Input: 6
Output: 1, 1, 2, 3, 5, 8
*/
#include <stdio.h>
int main(void) 
{
    int i, n, t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    printf("Fibonacci Series : %d, %d", t1, t2);

    for (i = 1; i <= n; ++i) 
    {
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}