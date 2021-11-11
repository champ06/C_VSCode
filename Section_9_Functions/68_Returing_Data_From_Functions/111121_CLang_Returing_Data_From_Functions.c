/*
* Returning Data from Functions
*/

#include <stdio.h>
#include <string.h>

int multiplyTwoNumbers (int x, int y)
{
    int result = x * y;
    return result;
}

int main ()
{
    int result = 0;
    result = multiplyTwoNumbers (10, 30);
    printf("Result is %d\n", result);
    return 0;
}