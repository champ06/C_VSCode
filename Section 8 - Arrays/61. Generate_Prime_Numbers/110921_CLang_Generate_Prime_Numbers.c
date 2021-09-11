/*
** Generate the Prime Numbers in C
** Prime Number is not evenly divisible by any other Prime Number
** p/primes[i] >= primes[i]
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
// Method 1
int main()
{
    int p;
    int i;

    int primes[50] = {0};
    int primeIndex = 2;

    bool isPrime;

    // hardcode prime numbers
    primes[0] = 2;
    primes[1] = 3;

    for(p = 5; p <= 100; p = p + 2)     // Iterate over all the ODD Numbers
    {
        isPrime = true;

        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
            if (p % primes[i] == 0)
                isPrime = false;

        if (isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for ( i = 0;  i < primeIndex;  ++i )
         printf ("%i  ", primes[i]);

    printf("\n");
    return 0;
}
*/

/*
// Method 1
// Find given number is Prime or not
int main()
{
    int n, i, count = 0;

    printf("Enter the number to find the Prime or not = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count = count + 1;
    }

    if (count == 2)
        printf("%d is a Prime Number", n);
    else
        printf("%d is not a Prime Number", n);

    return 0;
}
*/

// Method 2
// Find Prime Number from the range of values
int main()
{
    int num, s1, s2, i, j;

    printf("Printing Prime Number from the starting and Ending Values = ");
    scanf("%d %d", &s1, &s2);

    for (i = s1; i <= s2; i++)
    {
        for(j = 2; j <= i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
        {
            printf("%d ", i);
        }
        
    }

    return 0;
}