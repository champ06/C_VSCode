/*
https://www.codechef.com/problems/FLOW011
*/

#include<stdio.h>

int main()
{
    int NumOfTestCases, i;

    // Total Test Cases
    scanf("%d", &NumOfTestCases);

    for(i = 0; i < NumOfTestCases; i++)
    {
        float basicSalary, grossSalary;
        while(NumOfTestCases > 0)
        {
            scanf("%f", &basicSalary);
            if(basicSalary < 1500)
            {
                grossSalary = basicSalary + (0.1 * basicSalary) + (0.9 * basicSalary);
                printf("%.2f\n", grossSalary);
            }
            else
            {
                grossSalary = basicSalary + 500 + (0.98 * basicSalary);
                printf("%.2f\n", grossSalary);
            }
        NumOfTestCases--;
        }
    }   
    return 0;
}