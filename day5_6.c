/*
Write a program that will calculate the price for a quantity entered
from the keyboard, given that the unit price is Rs.5 and there is a
discount of 10 percent for quantities over 30 and a 15 percent
discount for quantities over 50.
*/

#include<stdio.h>

int main(void)
{
    int q,t;

    printf("Enter Quantity : ");
    scanf("%d",&q);

    t = q*5;

    printf("Original Price for quantity is : %d",t);

    if(q>=30)
    {
        printf("\nDiscounted Price is : %d",t-t*10/100);
    } 
    else
        if(q>=50)
        {
            printf("\nDiscounted Price is : %d",t-t*15/100);
        }
        else
        {
            printf("\nNo discunt for above quantity.");
        }
    return 0;
}