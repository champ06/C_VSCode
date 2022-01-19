/*
* Global Variables in Multi-File Project
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "global.h"

void DoSomething();
void DoSomething1();

int main(void)
{
    x = 100;
    printf("%d\n", x);
    DoSomething();
    DoSomething1();
    DoSomething();
    return 0;
}