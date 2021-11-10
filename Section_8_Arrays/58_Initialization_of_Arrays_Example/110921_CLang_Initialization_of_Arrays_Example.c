/*
** Initialization of Arrays - Example Code
**
*/

#include<stdio.h>
#define MONTHS 12

int main()
{   
    
    const char* monthsInLetters[MONTHS] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("Month %s has %2d days.\n", monthsInLetters[index], days[index]);

    return 0;
}