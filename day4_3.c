/*
Write a program to accept a 4 digit number and
    a. Display face value of each decimal digit
    b. Display place value of each decimal digit
    c. Display no in reverse order by changing decimal place values
If user enters a 4 digit number 9361 output should be
    a. 9 3 6 1
    b. 9361 = 9 000 + 300 + 60 + 9
    c. 1639
*/

#include<stdio.h>

int main()
{
    int num, rem1,rem2,rem3,rem4,rev,onum;

    printf("Enter 4 digit number: ");
    scanf("%d",&num);  //9361
    onum=num;

    rem1 = num % 10; //9361 %10 =1   remainder
    num = num/10 ;    // 936   quotient

    rem2 = num % 10 ;//936 % 10 = 6
    num =num/10; // 93

    rem3 = num % 10;  //93 % 10 = 3
    num =num/10;  //9

    rem4 = num % 10; //9 % 10 = 9


    rev = rem4 *1 + rem3 * 10+ rem2 * 100 + rem1 * 1000;

    printf("\nFace value:%d\t %d\t %d\t %d\t",rem4,rem3,rem2,rem1);

    printf("\nPlace value: %d = %d + %d + %d + %d",onum , rem4 * 1000, rem3 * 100, rem2 *10,rem1*1);

    printf("\nReverse number: %d",rev);
	
    return 0;
}