/*
* Convert A String To A Double, Int Or Long Int With atof(), atoi() or atol()
* https://www.youtube.com/watch?v=UQOlTdArCRo
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *double_test = "98.45";
    char *int_test = "945";
    char *long_int_test = "1224567890123456";

    double double_result = atof (double_test);
    int int_result = atoi (int_test);
    long int long_int_result = atol (long_int_test);

    printf("Double: %.2f\n", double_result);
    printf("Int: %d\n", int_result);
    printf("Long int: %ld\n", long_int_result);

    return 0;
}