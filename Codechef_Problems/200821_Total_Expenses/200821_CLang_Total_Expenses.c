/*
https://www.codechef.com/problems/FLOW009
*/

#include<stdio.h>

int main()
{
    int NumOfTestCases, i;

    // Total Test Cases
    scanf("%d", &NumOfTestCases);

    for(i = 0; i < NumOfTestCases; i++)
    {
        double totalQuantity, pricePerQuantity;
        double totalPrice;
        while(NumOfTestCases > 0)
        {
            scanf("%lf %lf", &totalQuantity, &pricePerQuantity);
            if(totalQuantity < 1000)
            {
                totalPrice = totalQuantity * pricePerQuantity;
                printf("%lf\n", totalPrice);
            }
            else
            {
                totalPrice = totalQuantity * pricePerQuantity;
                totalPrice = totalPrice - (totalPrice*0.1);
                printf("%lf\n", totalPrice);
            }
        NumOfTestCases--;
        }
    }   
    return 0;
}