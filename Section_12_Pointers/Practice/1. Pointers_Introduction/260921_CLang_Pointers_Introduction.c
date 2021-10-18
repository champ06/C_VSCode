/*
** Pointers Introduction
*/

#include<stdio.h>

int main()
{
    int a = 10, b = 9, c;
    int *p, *q;

    p = &a;
    q = &b;
    c = *q;

    printf("Printing values from variables\n");
    printf("---------------------------------------\n");

    printf("Value of a = %d & b = %d\n\n", a, b);

    printf("Printing values from pointers\n");
    printf("---------------------------------------\n");

    printf("Value of a/p = %d & b/q = %d\n\n", *p, *q);

    printf("Printing addresses of a & b\n");
    printf("---------------------------------------\n");

    printf("Value of a = %x & b = %x\n\n", &a, &b);

    printf("Printing addresses of a & b using pointers\n");
    printf("---------------------------------------\n");

    printf("Value of p = %x & q = %x\n\n", p, q);

    printf("Printing addresses of p & q\n");
    printf("---------------------------------------\n");

    printf("Value of p = %x & q = %x\n\n", &p, &q);

    printf("Printing value of c\n");
    printf("---------------------------------------\n");

    printf("Value of c = %d\n\n", c);
    printf("Value of c = %x\n\n", &c);

    printf("---------------------------------------\n");
    printf("Changing the value of pointer p\n\n");
    *p = 20;
    printf("a = %d\n", *p);
    printf("a = %d\n", a);
    printf("Address of p = %x", p);
    return 0;
}
