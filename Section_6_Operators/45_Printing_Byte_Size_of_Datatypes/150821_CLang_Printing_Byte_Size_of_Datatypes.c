/*
* Author: Rakuram
* Purpose: Printing Byte Size of Datatypes using sizeof operator in C
* Date: 15-08-2021
*/

#include<stdio.h>
#include<limits.h>

int main()
{

/*
// 1 byte -> [0-255] or [0x00-0xFF]
uint8_t         number8     = testValue; // 255
unsigned char    numberChar    = testValue; // 255

// 2 bytes -> [0-65535] or [0x0000-0xFFFF]
uint16_t         number16     = testValue; // 65535
unsigned short    numberShort    = testValue; // 65535

// 4 bytes -> [0-4294967295] or [0x00000000-0xFFFFFFFF]
uint32_t         number32     = testValue; // 4294967295
unsigned int     numberInt    = testValue; // 4294967295

// 8 bytes -> [0-18446744073709551615] or [0x0000000000000000-0xFFFFFFFFFFFFFFFF]
uint64_t             number64         = testValue; // 18446744073709551615
unsigned long long     numberLongLong    = testValue; // 18446744073709551615
*/
    printf("Printing the sbyte size of different operator using 'sizeof' operator\n\n");
    printf("Sizeof 'int' = %zd\n", sizeof(int));
    printf("Sizeof 'unsigned int' = %zd\n", sizeof(unsigned int));
    printf("Sizeof 'signed int' = %zd\n", sizeof(signed int));
    printf("Sizeof 'float' = %zd\n", sizeof(float));
    printf("Sizeof 'char' = %zd\n", sizeof(char));
    printf("Sizeof 'long' = %zd\n", sizeof(long));
    printf("Sizeof 'long long' = %zd\n", sizeof(long long));
    printf("Sizeof 'double' = %zd\n", sizeof(double));
    printf("Sizeof 'long double' = %zd\n", sizeof(long double));
    printf("Sizeof 'uint8_t or u_int8_t' = %zd\n", sizeof(uint8_t));
    printf("Sizeof 'uint16_t or u_int16_t' = %zd\n", sizeof(uint16_t));
    printf("Sizeof 'uint32_t or u_int32_t' = %zd\n", sizeof(uint32_t));
    printf("Sizeof 'uint64_t or u_int32_t' = %zd\n", sizeof(uint64_t));
    printf("Sizeof 'uintmax_t' = %zd\n", sizeof(uintmax_t));
    printf("Sizeof 'uintptr_t' = %zd\n", sizeof(uintptr_t));
    printf("Sizeof 'int8_t' = %zd\n", sizeof(int8_t));
    printf("Sizeof 'int16_t' = %zd\n", sizeof(int16_t));
    printf("Sizeof 'int32_t' = %zd\n", sizeof(int32_t));
    printf("Sizeof 'int32_t' = %zd\n", sizeof(int64_t));
    printf("Sizeof 'intmax_t' = %zd\n", sizeof(intmax_t));
    printf("Sizeof 'intptr_t' = %zd\n", sizeof(intptr_t));

    printf("Max of 'int8_t' = %zd\n", __INT8_MAX__);
    printf("Max of 'int16_t' = %zd\n", __INT16_MAX__);
    printf("Max of 'int32_t' = %zd\n", __INT32_MAX__);
    printf("Max of 'int64_t' = %zd\n", __INT64_MAX__);

    printf("Max of 'intptr_t' = %zd\n", __INTPTR_MAX__);

    printf("Max of 'uint8_t' = %zd\n", __UINT8_MAX__);
    printf("Max of 'uint16_t' = %zd\n", __UINT16_MAX__);
    printf("Max of 'uint32_t' = %zd\n", __UINT32_MAX__);
    // printf("Max of 'uint64_t' = %u\n", __UINT64_MAX__); Not working
    
    return 0;
}