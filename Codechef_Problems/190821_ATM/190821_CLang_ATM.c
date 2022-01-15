/*
Problem Link: https://www.codechef.com/submit/HS08TEST
*/

#include<stdio.h>

int main()
{
    float accBalance = 0;
    int amtRequired = 0;

    scanf("%d %f", &amtRequired, &accBalance);

    if (amtRequired % 5 == 0 && accBalance >= (amtRequired + 0.5))
    {
        printf("%.2f", accBalance - (amtRequired + 0.5));
    }
    else
    {
        printf("%.2f", accBalance);
    }

    return 0;
}