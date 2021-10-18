/*
** Function Pointer
*/

#include<stdio.h>
#include<stdlib.h>

int x, y;
int add(int a, int b);
int sub(int a, int b);

int foobar (int a, int b, int (*fp) (int, int))
{
    return fp(a, b);
}


int main()
{
    x = foobar(5, 12, &add);
    y = foobar(5, 12, &sub);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}

int add (int a, int b)
{
    return a + b;
}

int sub (int a, int b)
{
    return a - b;
}