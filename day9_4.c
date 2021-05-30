/*
Write a function to calculate nth term of the fibonacci series using recursion
*/

#include <stdio.h>

int fseries(int);
 
int main()
{
    int num;
    int result;
 
    printf("Enter the nth number in febonacci series: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("febonacci of negative number is not possible.\n");
    }
    else
    {
        result = fseries(num);
        printf("The %d number in febonacci series is %d\n", num, result);
    }
    return 0;
}
int fseries(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return(fseries(num - 1) + fseries(num - 2));
    }
}