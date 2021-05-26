/*
Write a program to accept a 5 digit number and check whether it is
a numeric palindrome. (If reversed number is same as entered
number it is called palindrome).
*/

#include <stdio.h>
int main() {
    int num, rnum = 0, rem, onum;
    printf("Enter an integer: ");
    scanf("%d", &num);
    onum = num;

    while (num != 0) 
    {
        rem = num % 10;
        rnum = rnum * 10 + rem;
        num /= 10;
    }
    
    if (onum == rnum)
        printf("%d is a palindrome.", onum);
    else
        printf("%d is not a palindrome.", onum);

    return 0;
}