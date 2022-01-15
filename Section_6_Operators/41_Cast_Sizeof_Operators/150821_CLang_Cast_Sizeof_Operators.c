/*
* Author: Rakuram
* Purpose: Cast and Sizeof Operators in C
* Date: 15-08-2021
*/

#include<stdio.h>

int main()
{
    int result;
    float a = 25.6, b = 68.78;

    result = (int)a + (int)b;
    printf("With Casting, Result = %d\n\n", result);

    printf("\'Sizeof\' Result = %d\n", sizeof(result));

    return 0;
}