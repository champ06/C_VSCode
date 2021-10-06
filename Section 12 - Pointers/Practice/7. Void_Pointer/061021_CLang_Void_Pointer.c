/*
** Void Pointer
*/

#include<stdio.h>

int main()
{
    int a = 5;
    float b = 10.0;
    char c = 'a';

    int *iptr;      // Can store the address of int variable
    float *fptr;    // Can store the address of float variable
    char *cptr;     // Can store the address of char variable
    void *vptr;     // Can store the address of any variable with any datatype

    iptr = &a;
    *iptr = 15;
    printf("Pointer to Integer (iptr) = %d\n", *iptr);

    vptr = &a;
    printf("Pointer to any datatype (vptr) = %d\n",*(int *)vptr);

    fptr = &b;
    printf("Pointer to Float (fptr) = %f\n", *fptr);

    vptr = &b;
    printf("Pointer to any datatype (vptr) = %f\n",*(float *)vptr);

    cptr = &c;
    printf("Pointer to char (cptr) = %c\n", *cptr);

    vptr = &c;
    printf("Pointer to any datatype (vptr) = %c\n",*(char *)vptr);

    *cptr = 'b';
    printf("Pointer to char (cptr) = %c\n", *cptr);

    vptr = &c;
    printf("Pointer to any datatype (vptr) = %c\n",*(char *)vptr);

    return 0;
}