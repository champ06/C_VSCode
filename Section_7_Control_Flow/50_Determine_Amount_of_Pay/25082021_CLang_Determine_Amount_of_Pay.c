/*
* Author: Rakuram
* Purpose: Determmining the Amount of Pay
* Lecture: 50 
* Date: 17-08-2021
*/

// Method 1

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
        printf("Your gross pay for this week = %d\n", grossPay);
    }
    else
    {
        grossPay = numberOfHours * 12;
        printf("Your gross pay for this week = %d\n", grossPay);
    }

    // Calculating Taxes
    if (grossPay > 0 && grossPay <= 300)
    {
        taxes = (grossPay * 0.15);
        printf("Your taxes for this week = %.2f\n", taxes);
    }
    else if(grossPay > 300 && grossPay <= 450)
    {
        taxes = (300 * 0.15) + ((grossPay - 300) * 0.20);
        printf("Your taxes for this week = %.2f\n", taxes);
    }
    else
    {
        taxes = (300 * 0.15) + (150 * 0.20) + ((grossPay - 450) * 0.25);
        printf("Your taxes for this week = %.2f\n", taxes);
    }
    
    // Net Pay = Gross Pay - Taxes
    netPay = grossPay - taxes;
    printf("Your net pay for this week = %.2f\n", netPay);

    return 0;
}


// Method 2
/*
#include <stdio.h>
#include <stdlib.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40

int main()
{
   // declare variables
   int hours = 0;
   double grossPay = 0.0;
   double taxes = 0.0;
   double netPay = 0.0;

   printf("Please enter the number of hours worked this week: ");

   // get the input
   scanf("%d", &hours);

   // calculate the gross pay
   if (hours <= 40)
       grossPay = hours * PAYRATE;
   else
   {
     grossPay = 40 * PAYRATE;
     double overTimePay = (hours - 40) * (PAYRATE * 1.5);
     grossPay += overTimePay;
   }

   // calculate taxes
   if (grossPay <= 300)
   {
       taxes = grossPay * TAXRATE_300;
   }
   else if(grossPay > 300 && grossPay <= 450)
   {
       taxes = 300 * TAXRATE_300;
       taxes += (grossPay - 300) * TAXRATE_150;
   }
   else if (grossPay > 450)
   {
       taxes = 300 * TAXRATE_300;
       taxes += 150 * TAXRATE_150;
       taxes += (grossPay - 450) * TAXRATE_REST;
   }

   // calculate the netpay
   netPay = grossPay - taxes;

   // display output
   printf("Your gross pay this week is: %.2f\n", grossPay);
   printf("Your taxes this week is: %.2f\n", taxes);
   printf("Your net pay this week is: %.2f\n", netPay);

   return 0;
}
*/