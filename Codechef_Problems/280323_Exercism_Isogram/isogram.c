// C program to find the isogram in a given phrase
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "isogram.h"

int main(void)
{    
    bool result;
    result = is_isogram("raku");

    if (result != 0)
        printf("Given string is an Isogram");
    else
        printf("Given string is not an Isogram");

    return result;
}

bool is_isogram(const char phrase[])
{

    for (int index = 0; index < strlen(phrase); index++)
    {
        for (int charindex = index + 1; charindex < strlen(phrase); charindex++)
        {
            if (phrase[index] == phrase[charindex])
            {
                return 1;
            }
            else
                return 0;
        }
    }
}