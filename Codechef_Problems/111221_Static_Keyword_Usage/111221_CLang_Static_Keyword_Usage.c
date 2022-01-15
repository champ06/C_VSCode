/*
* Usage of Static Keyword in C
* https://www.youtube.com/watch?v=UQOlTdArCRo
*/

#include <stdio.h>
#include <stdlib.h>

int add(void);

int main(void)
{
    int i, ret;
     
    for( i = 1; i < 10; i++)
    {
        ret = add();
        // printf("Printing from main call = %d\n", ret);
    }

    return 0;
}

int add()
{
    static int sum = 0;
    sum++;
    printf ("Sum is %d\n", sum);
    // return sum;
}