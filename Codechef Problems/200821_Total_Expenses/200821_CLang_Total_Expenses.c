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
        int totalQuantity, pricePerQuantity;
        float totalPrice;
        while(NumOfTestCases > 0)
        {
            scanf("%d %d", &totalQuantity, &pricePerQuantity);
            if(totalQuantity < 1000)
            {
                totalPrice = totalQuantity * pricePerQuantity;
                printf("%.6f\n", totalPrice);
            }
            else
            {
                totalPrice = totalQuantity * pricePerQuantity;
                totalPrice = totalPrice - (totalPrice*0.1);
                printf("%.6f\n", totalPrice);
            }
        NumOfTestCases--;
        }
    }   
    return 0;
}