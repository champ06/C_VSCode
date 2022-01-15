/*
* Lucky Four Program
* https://www.codechef.com/problems/LUCKFOUR
*/

#include<stdio.h>

int main()
{
    int NumOfTestCases, i;

    // Total Test Cases
    scanf("%d", &NumOfTestCases);

    while(NumOfTestCases > 0)
    {
        int numEntered, counter = 0, remainder;
        scanf("%d", &numEntered);
        while(numEntered != 0)
        {
            remainder = numEntered % 10;
            if (remainder == 4)
                counter ++;
            numEntered = numEntered / 10; 
        }
    printf("%d\n", counter);
    NumOfTestCases--;
    }
    return 0;
}