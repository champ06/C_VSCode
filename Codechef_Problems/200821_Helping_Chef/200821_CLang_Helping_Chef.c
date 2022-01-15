/*
https://www.codechef.com/problems/FLOW008
*/

#include<stdio.h>

int main()
{
    int NumOfTestCases, i;

    // Total Test Cases
    scanf("%d", &NumOfTestCases);

    for(i = 0; i < NumOfTestCases; i++)
    {
        int numEntered;
        
        while(NumOfTestCases > 0)
        {
            scanf("%d", &numEntered);
            if(numEntered < 10)
                printf("Thanks for helping Chef!\n");
            else
                printf("-1\n");
        NumOfTestCases--;
        }
    }   
    return 0;
}