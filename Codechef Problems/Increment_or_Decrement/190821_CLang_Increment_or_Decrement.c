/*
https://www.codechef.com/problems/DECINC
*/

#include<stdio.h>

int main()
{
    int num1, result;

    scanf("%d", &num1);

    if(num1 % 4 == 0)
    {
        num1 = ++num1;
        printf("%d", num1);
    }
    else
    {
        num1 = --num1;
        printf("%d", num1);
    }
    return 0;
}