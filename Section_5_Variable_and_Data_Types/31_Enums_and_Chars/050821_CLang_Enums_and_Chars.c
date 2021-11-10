/*
* Author: Rakuram
* Purpose: Enums and Chars
* Date: 05-08-2021
*/

#include<stdio.h>

int main()
{
    enum myVariable {male, female};

    enum myVariable d, e;
    // enum myVariable e;

    d = male;
    e = female;

    printf("%d %d", d, e);
    // printf("\n%d", e);


    return 0;
}
