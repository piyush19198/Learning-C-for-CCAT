/*Print the ASCII value of user entered character in decimal, hex, octal format and also print
the character for user entered ASCII value.
*/

#include<stdio.h>

int main()
{
    char val;
    printf("Enter the Value to convert into ASCII : ");
    scanf("%c",&val);

    printf("ASCII value is : %d",val);
    
    return 0;
}
