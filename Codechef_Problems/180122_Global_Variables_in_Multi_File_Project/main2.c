#include <stdio.h>
#include "global.h"

void DoSomething1()
{
    y = 150;
    x = 200;
    printf("Value of y = %d from main2.c file\n", y);
    printf("Value of x = %d from main2.c file\n", x);
}