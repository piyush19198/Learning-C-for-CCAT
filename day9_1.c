/*
Write a function to implement four function calculator. Function would
take operands and operator as arguments and returns result.
In above program, division may fail if denominator is zero.
Use global variable as an error flag to avoid this problem.
*/
#include<stdio.h>

float add(float a,float b);
float sub(float a,float b);
float mul(float a,float b);
float div(float a,float b);

float main(void)
{
    float n1=0,n2=0,res=0;
    int o=0;
    printf("Enter first number : ");
    scanf("%f",&n1);
    printf("Enter second number : ");
    scanf("%f",&n2);

    printf("Select operation to be performed : \n1.Addition\n2.Subtraction\n3.Multiplicaition\n4.Division\n");
    scanf("%d",&o);

    switch(o)
    {
    case 1:
        res=add(n1,n2);
        printf("Addition is: %.2f",res);
        break;
    case 2:
        res=sub(n1,n2);
        printf("Subtraction is: %.2f",res);
        break;
    case 3:
        res=mul(n1,n2);
        printf("Multiplication is: %.2f",res);
        break;
    case 4:
        res=div(n1,n2);
        printf("Division is: %.2f",res);
        break;
    default:
        printf("Enter correct choice.");
        break;
    }
    return 0;
}

float add(float a,float b)
{
    return a + b;
}

float sub(float a,float b)
{
    return a - b;
}

float mul(float a,float b)
{
    return a * b;
}

float div(float a,float b)
{
    return a / b;
}