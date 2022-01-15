/*
* Author: Rakuram
* Purpose: If Statements
* Date: 17-08-2021
*/

#include<stdio.h>

int main()
{
    int numberToTest, remainder;

    printf("Enter the number to be tested: ");
    scanf("%d", &numberToTest);
    remainder = numberToTest % 2;

    if (remainder == 0)
    {
        printf("Given Number is EVEN\n");
    }

    else
    {
        printf("Given Number is ODD\n");
    }

    return 0;
}