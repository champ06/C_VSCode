#include<stdio.h>

int main()
{
    int NumOfTestCases, i;

    // Total Test Cases
    scanf("%d", &NumOfTestCases);

    for(i = 0; i < NumOfTestCases; i++)
    {
        int j, sumNumber, tempVar, reminder, sumOfDigits = 0, lengthOfDigits = 0;
        scanf("%d", &sumNumber);
        
        // Assigning UserInput Integer Value to tempVar variable 
        tempVar = sumNumber;
        // To find the length of the digit
        while (tempVar > 0) 
        {
            tempVar = tempVar / 10;
            lengthOfDigits++;
        }
        // printf("%d\n", lengthOfDigits);

        // Looping through the for loop for the length of the digits
        for (j = 0; j < lengthOfDigits; j++)
        {
            reminder = sumNumber % 10;
            sumNumber = sumNumber / 10;
            
            // printf("%d\n",sumNumber);
            sumOfDigits = sumOfDigits + reminder;
        }
        printf("%d\n", sumOfDigits);
    }

    return 0;
}