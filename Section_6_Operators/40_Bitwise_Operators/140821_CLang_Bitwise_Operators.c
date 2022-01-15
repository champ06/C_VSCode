/*
* Author: Rakuram
* Purpose: Different Bitwise Operators in C
* Date: 14-08-2021
* Reference: 
* https://www.log2base2.com/storage/how-integers-are-stored-in-memory.html
* https://www.log2base2.com/C/bitwise/bitwise-ones-complement-operator-in-c.html
*/

#include<stdio.h>

int main()
{
    unsigned int a = 50, b = 10;
    
    printf("\nDifferent Bitwise Operators\n\n");

    // Shift Opertors
    printf("Shift Operators\n");
    // a = 50 = 0x00110010
    // b = 10 = 0x00001010

    // Left Shift (a << b): First Operand * (2^ Second Operand)
    // 50 * (2 ^ 1) = 100
    // 50 * (2 ^ 2) = 200
    // 50 * (2 ^ 3) = 400
    printf("\nLeft shift\n");
    printf("'a' Left Shift by 1 = %d\n", a << 1);
    printf("'a' Left Shift by 2 = %d\n", a << 2);
    printf("'a' Left Shift by 3 = %d\n\n", a << 3);

    // Right Shift (a >> b): First Operand / (2^ Second Operand)
    // 50 / (2 ^ 1) = 25
    // 50 / (2 ^ 2) = 12
    // 50 / (2 ^ 3) = 6
    printf("Right shift\n");
    printf("'a' Left Shift by 1 = %d\n", a >> 1);
    printf("'a' Left Shift by 2 = %d\n", a >> 2);
    printf("'a' Left Shift by 3 = %d\n\n", a >> 3);

    printf("Bitwise AND\n");
    //      a = +50 = 0x00110010
    //     ~a = -51 = 0x00001010
    //         -----------------
    // Bitwise AND = 0x00000010 = 2
    //         -----------------
    printf("Bitwise AND of 'a' & 'b' = %d\n\n", a & b);

    printf("Bitwise OR\n");
    //      a = 50 = 0x00110010
    //      b = 10 = 0x00001010
    //         -----------------
    // Bitwise OR  = 0x00111010 = 58
    //         -----------------
    printf("Bitwise OR of 'a' & 'b' = %d\n\n", a | b);

    printf("Bitwise Exclusive OR\n");
    //          a = 50 = 0x00110010
    //          b = 10 = 0x00001010
    //             ------------------
    // Bitwise Ex - OR = 0x00111000 = 56
    //             ------------------
    printf("Bitwise Ex - OR of 'a' & 'b' = %d\n\n", a ^ b);

    printf("Binary 1's Complement\n");
    //          a = 50 = 0x00110010
    //              -----------------
    // 1's Complement  = 0x11001101 = -51
    //              -----------------
    printf("Binary 1's Complement of a (%d) = %d\n\n", a, ~a);

    printf("Binary 2's Complement\n");
    //          a = 50 = 0x00110010
    //              -----------------
    // 1's Complement  = 0x11001101 = -51
    // Add 1 to MSB    =         +1
    //              -----------------
    //                   0x11001110 = -50
    //              -----------------
    printf("Binary 2's Complement of a (%d) = %d\n\n", a, (~a + 1));

    return 0;

}