/*
Write a menu driven program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20
b. Reverse the number
Input: 9362
Output: 2639
c. Check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome
Input: 36963
Output: 36963 is a numeric palindrome
d. Check whether it is Armstrong no. (When sum of cube of all digits of
equals the number then the number is called as Armstrong number)
Example: 153
(1 * 1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) = 1 + 125 + 27 = 153
Input: 936
Output: 936 is not an Armstrong number
Input: 153
Output: 153 is an Armstrong number
*/

#include<stdio.h>

int main(void)
{
    int num,onum,choice;
    printf("Enter the number:");
    scanf("%d",&num);
    
    onum = num;

    int digit,sum;
    int rem,rev=0;
    int rnum;
    int temp,r;
    
    printf("Choose one of the following operations:\n1.Sum of digits of integers\n2.Reverse the number\n3.Palindrome Check\n4.Armstrong Number Check\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            while (num > 0)
            {
                digit = num % 10;
                sum  = sum + digit;
                num /= 10;
            }
            printf("Sum of the digits of %d = %d",onum, sum);
            break;
        case 2:
            while (num != 0) 
            {
                rem = num % 10;
                rev = rev * 10 + rem;
                num /= 10;
            }
            printf("Reversed number = %d", rev);
            break;
        case 3:
            while (num != 0) 
            {
                rem = num % 10;
                rnum = rnum * 10 + rem;
                num /= 10;
            }
            if (onum == rnum)
                printf("%d is a Palindrome.", onum);
            else
                printf("%d is not a Palindrome.", onum);
            break;
        case 4:
            temp=num;    
            while(num>0)    
            {    
                r=num%10;    
                sum=sum+(r*r*r);    
                num=num/10;    
            }    
            if(temp==sum)    
                printf("%d is Armstrong Number",temp);    
            else    
                printf("%d is not Armstrong Number",temp);
            break;
        default:
            printf("Please enter valid coice!");
            break;
    }
    return 0;
}