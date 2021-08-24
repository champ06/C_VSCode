/*
* Author: Rakuram
* Purpose: Determmining the Amount of Pay
* Lecture: 50 
* Date: 17-08-2021
*/

#include<stdio.h>

int main()
{
    int numberOfHours, basicPay = 12, overTimePay = 18, minHours = 40, excessHours, grossPay;
    float taxes, netPay;

    printf("Enter the amount of hours = ");
    scanf("%d", &numberOfHours);
    // printf("%d hours worked in a week\n", numberOfHours);

    // Calculating Gross Pay
    if (numberOfHours > 40)
    {
        excessHours = numberOfHours - minHours;
        grossPay = (minHours * 12) + (excessHours * 18);
        printf("%d\n", grossPay);
    }
    else
    {
        grossPay = numberOfHours * 12;
        printf("%d\n", grossPay);
    }

    // Calculating Taxes
    if (grossPay > 0 && grossPay <= 300)
    {
        taxes = (grossPay * 0.15);
        printf("%.2f\n", taxes);
    }
    else if(grossPay > 300 && grossPay <= 450)
    {
        taxes = (300 * 0.15) + ((grossPay - 300) * 0.20);
        printf("%.2f\n", taxes);
    }
    else
    {
        taxes = (300 * 0.15) + (150 * 0.20) + ((grossPay - 450) * 0.25);
        printf("%.2f\n", taxes);
    }
    
    // Net Pay = Gross Pay - Taxes
    netPay = grossPay - taxes;
    printf("%.2f\n", netPay);

    return 0;
}