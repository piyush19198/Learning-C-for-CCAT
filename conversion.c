/*
Write a program to accept a number and print the number in character, decimal, octal
and hexformats.
*/

#include<stdio.h>

int main(void)
{
    int num;
    printf("Enter the Number to convert : ");
    scanf("%d",&num);

    printf("Character value: %c\n",num);
    printf("Decimal Value: %d\n",num);
    printf("Octal Value: %o\n",num);
    printf("Hexadecimal Value: %x\n",num);

    return 0;
}
