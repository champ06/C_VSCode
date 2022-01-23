/*
* HCL_Interview_Round_2
* Embedded Developer Role
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a = 14, i; // 0b1101
int count = 0;
int mask = 1;

int main()
{
    for (i = 0; i < sizeof(a); i++)
    {
        if ((a & mask) != 0)
        {
            count++;
        }
        a >>= 1;
    }
    printf("%d", count);
    return 0;
}