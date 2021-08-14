/*
* Author: Rakuram
* Purpose: Basic Operators in C
* Date: 14-08-2021
*/

#include<stdio.h>
#include<stdbool.h>

int main()
{
    // Arithmetic Operators
    unsigned int a = 50, b = 10, f = 55, g = 65;

    printf("\nArithmetic Operators\n");
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a % b);
    printf("Modulo Operator = %d\n", a % b);
    printf("Pre-increment = %d %d\n", ++a, ++b);
    printf("Post-increment = %d %d\n\n", a++, b++);

    printf("After Post-Increment = %d %d\n\n", a, b);

    printf("Pre-decrement = %d %d\n", --a, --b);
    printf("Post-decrement = %d %d\n\n", a--, b--);

    printf("After Post-decrement = %d %d\n\n", a, b);

    // Logical Operators
    bool c = true, d = false, e = true;
    printf("Logical Operators\n");
    printf("Logical AND of c & d = %d\n", c && d);
    printf("Logical AND of c & e = %d\n", c && e);

    printf("Logical OR of c & d = %d\n", c || d);
    printf("Logical OR of c & e = %d\n", c || e);

    printf("Logical NOT of c, d, & e = %d %d %d\n", !c, !d, !e);
    printf("Logical NOT of c AND e = %d\n\n", !(c && e));

    // Assignment Operators
    printf("Assignment Operators\n");
    printf("Equal to & Divide = %d\n", a/=b);   // a = a/b
    printf("Equal to & Multiply = %d\n", a*=b);   // a = a/b
    printf("Equal to & Modulo = %d\n", a%=b);
    printf("Equal to & Add = %d\n", a+=b);
    printf("Equal to & Subtract = %d\n", g-=a);

    printf("After Assignment Operation Value of a & b = %d %d\n\n", a = a + 40, b);
 
    // Relational Operators
    printf("Relational Operators\n");
    printf("Is 'a' Equal to 'b'? = %d\n", a == b);
    printf("Is 'a' Not Equal to 'b'? = %d\n", a!=b);
    printf("Is 'a' greater than 'b'? = %d\n", a > b);
    printf("Is 'a' greater than or equal to 'b'? = %d\n", a >= b);
    printf("Is 'a' less than 'b'? = %d\n", a < b);
    printf("Is 'a' less than or equal to 'b'? = %d\n\n", a <= b);

    return 0;
}