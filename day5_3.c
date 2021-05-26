/*
Write a program to calculate Area and Perimeter of Triangle for given length of
three sides of triangle.
    Use sqrt() function from math.h to calculate square root.
    Perimeter = a+b+ c*a +b+c
    s = (a+b+c)/2
    Area = √s x (s – a) x (s – b) x (s - c)
Test the program using values 3,4,5 and 1, 2, 3 and 1, 2, 4 for a, b, c. Observe the
results.
*/
#include<stdio.h>
#include<math.h>

int main(void)
{
    int s1,s2,s3;
    float a,p,sp,r;

    printf("Enter sides of Triangle : \n");
    scanf("%d",&s1);
    scanf("%d",&s2);
    scanf("%d",&s3);

    p = (s1 + s2 + s3);
    sp = p/2;
    a = sqrt(sp*(sp-s1)*(sp-s2)*(sp-s3));

    printf("Perimeter of given triangle is : %f \n",p);
    printf("Area of given triangle is : %f \n",a);

    return 0;
}