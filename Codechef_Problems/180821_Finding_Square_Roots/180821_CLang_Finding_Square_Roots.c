#include<stdio.h>
#include<math.h>

int main()
{
    int NumOfTestCases, i;

    // Total Test Cases
    scanf("%d", &NumOfTestCases);

    for(i = 0; i < NumOfTestCases; i++)
    {
        double number, squareRoot;
        int squareRoot_int;   
        while ( NumOfTestCases > 0)
        {
        scanf("%lf", &number);
        squareRoot = sqrt(number);
        squareRoot_int = (int)squareRoot;
        printf("%d\n", squareRoot_int);
        NumOfTestCases--;
        }  
    }
    return 0;
}