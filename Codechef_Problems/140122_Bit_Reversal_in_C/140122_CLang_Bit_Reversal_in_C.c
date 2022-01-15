/*
* Convert A String To A Double, Int Or Long Int With atof(), atoi() or atol()
* https://www.youtube.com/watch?v=UQOlTdArCRo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int a = 63 ;        // 0001 0000
    int reversed = 0;   // 0000 1000
    long long int i;

    for (i = 0; i < sizeof(int); i++)
    {
        printf("%02hhx ", ((unsigned char*)&a)[i]);
    }

    for (int i = 0; i < 32; i++)
    {    
        reversed |= ((a >> i) & 1) << (32 - i - 1);
    }

    // printf("%u\n", reversed);
    printf("\n");
    for (i = 0; i < sizeof(int); i++)
    {
        printf("%02hhx ", ((unsigned char*)&reversed)[i]);
    }
    
    return 0;
}