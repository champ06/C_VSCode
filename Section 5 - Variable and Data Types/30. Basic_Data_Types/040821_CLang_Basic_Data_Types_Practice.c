/*
* Author: Rakuram
* Purpose: Basic Data Types - Practice
* Date: 04-08-2021
*/

#include<stdio.h>
#include<limits.h>

int main()
{
    // By using pre-defined macro for signed and unsigned char
    printf("Signed Char Minimum         :   %d\n", SCHAR_MIN);
    printf("Signed Char Maximum         :   %d\n", SCHAR_MAX);
    printf("Unsigned Char Minimum       :   0 (By Default) \n");
    printf("Unsigned Char Maximum       :   %d\n", UCHAR_MAX);

    // By using (unsigned) char
    printf("Unsigned Char Minimum       :   %d\n", (unsigned) CHAR_MIN);
    printf("Unsigned Char Maximum       :   %d\n", (unsigned) CHAR_MAX);

    // By using (signed) char
    printf("Signed Char Minimum         :   %d\n", (signed) CHAR_MIN);
    printf("Signed Char Maximum         :   %d\n", (signed) CHAR_MAX);

    char i = -1;
    printf("%d\n", i);
    
    return 0;
}