#include <stdio.h>
 
// User-defined function to check 
// prime number
int checkPrimeNumber(int number)
{
    int i, f = 1;
   
    // Condition for finding the
    // prime numbers between the
    // given intervals
    for (i = 2; i <= number / 2; ++i) 
    {
        if (number % i == 0) 
        {
            f = 0;
            break;
        }
    }
 
    return f;
}
 
// Driver code
int main()
{
    int num1 = 2, num2 = 10, j, f;
 
    printf("Prime numbers between %d and %d are: ", 
            num1, num2);
    for (j = num1; j < num2; ++j) 
    {
        // if flag is equal to 1 then
        // it is a prime number
        // calling the function
        f = checkPrimeNumber(j);
 
        if (f == 1) 
        {          
            // Printing the result
            printf("%d ", j);
        }
    }
 
    return 0;
}
