/*
Write a function to indicate whether given number is prime or not.
Write another function to print prime numbers in the given range.
*/

#include <stdio.h>

int checkprime(int num);
void printprime(int lower, int upper);



int main()
{
    int lower, upper;
    
    printf("Enter the lower and upper limit to list primes: ");
    scanf("%d%d", &lower, &upper);
    
    printprime(lower, upper);
    
    return 0;
}


void printprime(int lower, int upper)
{
    printf("All prime number between %d to %d are: ", lower, upper);
    
    while(lower <= upper)
    {
        if(checkprime(lower))
        {
            printf("%d, ", lower);
        }
        
        lower++;
    }
}

 
int checkprime(int num)   
{  
    int i;  
      
    for(i=2; i<=num/2; i++)    
    {      
        if(num % i == 0)    
        {  
            return 0;  
        }    
    }   
      
    return 1;   
}