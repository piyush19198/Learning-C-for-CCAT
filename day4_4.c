// Write a program to accept three integer numbers and find its average

#include<stdio.h>

int main(void)
{
    int a,b,c;
    float avg;
    printf("Enter 3 numbers to calculate average : \n");
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Average of above numbers is : %3.2f",avg);

    return 0;
}