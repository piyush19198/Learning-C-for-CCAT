/*Print the ASCII value of user entered character in decimal, hex, octal format and also print
the character for user entered ASCII value.
*/

#include<stdio.h>

int main(void)
{
    char val;
    printf("Enter the Value to convert into ASCII : ");
    scanf("%c",&val);

    printf("ASCII value of %c is : %d \n",val,val);
    printf("Decimal Value of ASCII of %c is : %d \n", val,val);
    printf("Octal Value of ASCII of %c is : %o \n",val,val);
    printf("Hexadecimal Value of ASCII of %c is : %x", val,val);
    
    return 0;
}