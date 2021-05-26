/*
Write a program to convert temperature in Celsius to Fahrenheit and vice versa.
Formula for conversion is
    ºC = 5/9 x (ºF - 32)
*/
#include<stdio.h>

int main(void)
{
    int m;
    float c,f;

    printf("Select method of conversion :\n1. Celsius to Fahrenheit\n2.Fahrenheit to Celsius\n");
    scanf("%d",&m);

    switch (m)
    {
        case 1:
            printf("Enter the temperature in Celsius: ");
            scanf("%f",&c);
            f = ( c * 9 / 5 ) + 32;
            printf("Temperature in Fahrenheit is : %f",f);

        case 2:
            printf("Enter the temperature in Fahrenheit: ");
            scanf("%f",&f);
            c = ( 5 * f - 160 ) / 9; 
            printf("Temperature in Celsius is : %f",c);
    
        default:
            printf("Enter correect method.");
        break;
    }

    return 0;
}