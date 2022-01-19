/*
* Minimum of two integers using bitwise operators
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int x = 5;
    int y = 6;
    int result = 0;

    result = y ^ ((x ^ y) & -(x < y));

    if (result != 6)
        printf("Y is smaller than X");
    else
        printf("X is smaller than Y");

    return 0;

}
