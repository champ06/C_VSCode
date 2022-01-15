/*
** Wild Pointer
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    // First Method
    int *ptr;       // Rather than uninitialized, make it NULL.
    // Do not dereference the null pointer
    printf("%d\n", *ptr);
    */
    
    // Using malloc() function
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 67;
    printf("%d\n", *ptr);
    return 0;
}