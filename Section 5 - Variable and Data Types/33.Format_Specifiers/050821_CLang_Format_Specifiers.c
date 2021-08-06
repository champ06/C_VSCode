/*
* Author: Rakuram
* Purpose: Format Specifiers
* Date: 05-08-2021
*/

#include<stdio.h>
#include<stdbool.h>

int main()
{
    int intVar = 100; 
    float floatVar = 331.5;
    double doubleVar = 8.44e11;
    char charVar = 'a';
    bool boolVar = true;

    printf("Printing integer using %d\n", intVar);
    // printf("Printing integer using %o\n", intVar);
    printf("Printing float using %f\n", floatVar);
    printf("Printing float using %.2f\n", floatVar);
    printf("Printing double using %e\n", doubleVar);
    printf("Printing double using %g\n", doubleVar);
    printf("Printing char using %c\n", charVar);
    printf("Printing bool using %i\n", boolVar);
    return 0;
}