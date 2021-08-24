/*
* Program to find leap year or not
*/

#include<stdio.h>

int main()
{
    int yearEntered;
    printf("Enter the year you want to calculate leap year or not\n");
    scanf("%d", &yearEntered);

    if((yearEntered % 4 == 0 && yearEntered % 100 != 0) || yearEntered % 400 == 0)
        printf("%d is a Leap Year", yearEntered);
    else
        printf("%d is not a Leap Year", yearEntered);

    return 0;
}