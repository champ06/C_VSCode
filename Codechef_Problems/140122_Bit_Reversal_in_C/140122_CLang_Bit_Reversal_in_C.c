/*
* Convert A String To A Double, Int Or Long Int With atof(), atoi() or atol()
* https://www.youtube.com/watch?v=UQOlTdArCRo
*/

/*
* Convert A String To A Double, Int Or Long Int With atof(), atoi() or atol()
* https://www.youtube.com/watch?v=UQOlTdArCRo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char a = 63, b, c, d;        // 0001 0000
    int reversed = 0;   // 0000 1000
    long long int i;

    for (i = 0; i < sizeof(char); i++)
    {
        printf("%02hhx ", ((unsigned char*)&a)[i]);
    }

    for (int i = 0; i < 8; i++)
    {    
        // reversed |= ((a >> i) & 1) << (32 - i - 1);
        b = (a >> i) & 1; // To take out the last digit from the integer
        c = b << 8 - i - 1; // to bit shift to 1st position
        // 0 --> 31
        // 1 --> 30
        // ...
        // ...
        // 30 --> 1
        // 31 --> 0
        reversed = reversed | c;

    }

    // printf("%u\n", reversed);
    printf("\n");
    for (i = 0; i < sizeof(char); i++)
    {
        printf("%02hhx ", ((unsigned char*)&reversed)[i]);
    }
    
    return 0;
}

/*
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
*/