/*
Write a program to Accept two numbers and

a. find its sum.
b. find its difference.
c. find its product.

Test the program using different integral data type signed/unsigned char/int/long.

First test the result using small values. Then test the same program using large values.
Observe the results.
*/

#include<stdio.h>

int main(void)
{
    int n1,n2,sum,dif,mul;
 
    printf("Enter 1st Number: ");
    scanf("%d",&n1);
    printf("Enter 2st Number: ");
    scanf("%d",&n2);
 
    sum = n1 + n2;
    dif = n1 - n2;
    mul = n1 * n2;
 
    printf("Sum = %d \nDiffrence = %d \nMultiplication = %d",sum,dif,mul);
 
    return 0;
}
