/*
Write a program to accept integer values of base and index and calculate
power of base to index.
Input: base: 2 index: 5
Output: 32
Input: base: 8 index: 3
Output: 512
*/

#include <stdio.h>

int main()
{
    int base, exponent;
    long long power = 1;
    int i;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for(i=1; i<=exponent; i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %lld", base, exponent, power);

    return 0;
}