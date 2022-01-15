/*
* Author: Rakuram
* Purpose: Else...if statement
* Date: 17-08-2021
*/

#include<stdio.h>

int main()
{
    int number, sign;

    printf("Enter the number = ");
    scanf("%d", &number);

    if (number < 0)
    {
        sign = -1;
    }
    else if (number == 0)
    {
        sign = 0;
    }
    else
    {
        sign = 1;
    }

    printf("Sign = %d", sign);

    return 0;
}
