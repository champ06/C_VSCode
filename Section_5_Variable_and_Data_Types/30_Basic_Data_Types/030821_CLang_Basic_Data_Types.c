/*
* Author: Rakuram
* Purpose: Basic Data Types
* Date: 03-08-2021
*/

// https://www.tutorialspoint.com/cprogramming/c_data_types.htm
// https://docs.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-160

#include<stdio.h>
#include<stdbool.h>

int main()
{
    int integer = 5;
    float float_a = 2.01;
    double double_b = 22.0000000564e+11;
    // C89 Standard requires _Bool as a keyword. It only accepts 0 or 1 value
    _Bool boolVar = 1;

    // C99 Standard adds #include<stdbool.h>, which allows to write the datatype as bool and value as true or false
    bool boolvar_1 = false;

    return 0;
}