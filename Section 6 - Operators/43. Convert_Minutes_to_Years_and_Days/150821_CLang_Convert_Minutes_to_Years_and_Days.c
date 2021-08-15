/*
* Author: Rakuram
* Purpose: Convert Minutes to Years and Days
* Date: 15-08-2021
*/

#include<stdio.h>

int main()
{
    int minutesEntered;
    double minutesInDay = 1440, minutesInYear = 525600, Years = 0.0, Days = 0.0;
    // minutesInYear = Minutes in a Hour * No of Hours in a Day * No of Days in a Year = 60 * 24 * 365 = 525600

    printf("Enter the Number of Minutes = ");
    scanf("%d", &minutesEntered);
    printf("\nEntered Value of Minutes = %d\n", minutesEntered);

    printf("Total Number of Years in a Minutes = %lf\n", minutesEntered/minutesInYear);

    printf("Total Number of Days in a Minutes = %lf\n", minutesEntered/minutesInDay);

    printf("%d minutes is approximately %.1f days and %.1f years", minutesEntered, minutesEntered/minutesInDay, minutesEntered/minutesInYear);

    return 0;
}