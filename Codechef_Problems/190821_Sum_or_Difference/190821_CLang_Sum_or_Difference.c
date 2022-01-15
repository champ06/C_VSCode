/*
https://www.codechef.com/problems/DIFFSUM
*/

#include<stdio.h>

int main()
{
    int num1, num2, result;

    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
    {
        result = num1 - num2;
        printf("%d", result);
    }
    else
    {
        result = num1 + num2;
        printf("%d", result);
    }
    return 0;
}