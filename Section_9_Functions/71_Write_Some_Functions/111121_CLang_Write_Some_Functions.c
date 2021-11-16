/*
* Challenge - Write Some Functions 
*/

#include <stdio.h>
#include <string.h>

int gcd (int, int);
float absValue(float);
float sqrt_1(float);

/*
// My Implementation
int gcd (int a, int b)
{
    int result = 0, temp, remainder;
    if (a >= 0 && b >= 0)
    {
        // printf("GCD can be calculated for the given 2 integers\n");
        if (a < b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        else
        {
            remainder = a % b;
            if (remainder == 0)
            {
                return b;
            }
            else
            {
                a = b;
                b = remainder;
                gcd (a, b);
            }
        }   
    }

    else
    {
        if (a < 0 && b < 0)
        {
            a = absValue(a);
            b = absValue(b);
            gcd (a, b);
        }
        else if (b < 0)
        {
            b = absValue(b);
            gcd (a, b);
        }
        else
        {
            a = absValue(a);
            gcd (a, b);
        }
    }
}
*/

// Other way to implement GCD
int gcd (int a, int b)
{
    int temp;

    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// Absolute Value: -5 will be converted as +5
float absValue (float a)
{
    if (a < 0)
    {
        a = a * (-1);
    }
    return a;
}

// Finding Square Root of a function 
// Check the function absValue inside this sqrt() function
float sqrt_1 (float a)
{
    float guess = 1.0, returnValue = 0.0;
    const float epsilon =  0.00001;

    if (a < 0)
    {
        printf("Negative number is not allowed");
        returnValue = -1.0;
    }
    else
    {
        while (absValue (guess * guess - a) >= epsilon)
        {   
            guess = (a / guess + guess) / 2.0;
            returnValue = guess;
        }
    }

    return returnValue;
}

int main ()
{
    float p, q, result_absValue, result_Sqrt;
    int r, s, result_gcd;
    
    // To find the GCD of 2 integers 
    printf("Enter the 2 integer numbers you want to find the GCD : ");
    scanf("%d %d", &r, &s);
    result_gcd = gcd (r, s);
    printf ("\nGCD of %d and %d is %d\n", r, s, result_gcd);

    // To find the Absolute Value of a given number
    printf("Enter the number you want to find the absolute value : ");
    scanf("%f", &p);
    result_absValue = absValue(p);
    printf ("\nAbsolute Value of %.2f is %.2f\n", p, result_absValue);

    // To find the Square root of a given number
    printf("Enter the number you want to find the square root : ");
    scanf("%f", &q);
    result_Sqrt = sqrt_1(q);
    printf ("\nSquare Root of %.2f is %.2f\n", q, result_Sqrt);
}