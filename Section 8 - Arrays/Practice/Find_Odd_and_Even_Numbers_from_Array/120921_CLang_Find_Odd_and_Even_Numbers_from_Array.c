/*
** Calculate the Sum and Average of 5 Students
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TOTALELEMENTS 10

int main()
{
    int i, value[TOTALELEMENTS], OddCount = 0, EvenCount = 0;
/*
    for (i = 0; i < TOTALELEMENTS; i++)
    {
        printf ("Enter the value for %d Element = ", i + 1);
        scanf("%d", &value[i]);
    }

    // Findout the entered number is odd or even
    for (i = 0; i < TOTALELEMENTS; i++)
    {
        if (value[i] % 2 == 0)
            EvenCount++;
        else
            OddCount++;
    }
*/

    for (i = 0; i < TOTALELEMENTS; i++)
    {
        printf ("Enter the value for %d Element = ", i + 1);
        scanf("%d", &value[i]);
        if (value[i] % 2 == 0)
            EvenCount++;
        else
            OddCount++;
    }

    printf("Total Even Numbers = %d\n", EvenCount);
    printf("Total Odd Numbers = %d\n", OddCount);

    return 0;
}