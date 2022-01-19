/*
* Array as a Function Arguments 
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Method 1
/*
void print(char *C)
{
    int i = 0;
    while (*(C + i) != '\0')    // while (C[i] != '\0')
    {
        printf("%c", C[i]);
        i++;
    }
    printf("\n");
}
*/

// Method 2
void print(char *C)
{
    // int i = 0;
    while (*C != '\0')    // while (C[i] != '\0')
    {
        printf("%c", *C);
        // i++;
        C++;
    }
    printf("\n");
}


int main(void)
{
    char C[20] = "Hello, World!!!";

    print(C);

    return 0;
}