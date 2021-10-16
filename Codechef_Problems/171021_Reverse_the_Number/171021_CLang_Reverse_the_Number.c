/*
* Reverse the Number
* https://www.codechef.com/problems/FLOW007
*/

#include<stdio.h>

int main()
{
    int NumOfTestCases, i;

    // Total Test Cases
    scanf("%d", &NumOfTestCases);

    while(NumOfTestCases--)
    {
        long int numEntered, reverse = 0, remainder;
        scanf("%ld", &numEntered);
        while(numEntered != 0)
        {
            remainder = numEntered % 10;
            reverse = reverse * 10 + remainder;
            numEntered = numEntered / 10; 
        }
    printf("%d\n", reverse);
    }
    return 0;
}