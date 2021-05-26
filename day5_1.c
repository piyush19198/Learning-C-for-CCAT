// Write a program to accept three digit numbers and find sum of all its digits.

#include<stdio.h>

int main(void)
{
    int num, rem1,rem2,rem3,rev;

    printf("Enter 3 digit number: ");
    scanf("%d",&num);

    rem1 = num % 10;
    num = num/10 ;

    rem2 = num % 10 ;
    num =num/10;

    rem3 = num % 10;
    num =num/10;

    printf("\nAddition of Digits of above number is : %d",rem1+rem2+rem3);

    return 0;   
}