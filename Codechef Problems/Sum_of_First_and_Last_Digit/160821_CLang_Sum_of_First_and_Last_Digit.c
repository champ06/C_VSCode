/*
* Author: Rakuram
* Purpose: Sum of first and last digit
* Date: 16-08-2021
*/


/*
Input
3 
1234
124894
242323

Output
5
5
5
*/

#include<stdio.h>

int main(void)
{
    int NumOfTestCases;

    // Total Test Cases
    scanf("%d", &NumOfTestCases);

    while(NumOfTestCases--)
    {
        int numberEntered, firstDigit, lastDigit, sum = 0;
        scanf("%d", &numberEntered);
        
        lastDigit = numberEntered % 10;
        while (numberEntered != 0)
        {
            firstDigit = numberEntered % 10;
            numberEntered = numberEntered / 10;
        }
        
        sum = firstDigit + lastDigit;
        
        printf("%d\n", sum);
    }
    return 0;
}