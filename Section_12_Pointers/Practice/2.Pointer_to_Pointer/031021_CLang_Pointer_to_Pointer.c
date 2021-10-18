/*
** Pointer to Pointer
*/

#include<stdio.h>

int main()
{
    int a = 10;
    int *ptr1, **ptr2;
    // Pointer to variable
    ptr1 = &a;
    printf("Address of a = %x and ptr1 = %x\n", &a, &ptr1);
    printf("Value stored in a = %d and ptr1 = %x\n", a, ptr1);
    printf("ptr1 is pointing the variable with value = %d\n", *ptr1);
    printf("-----------------------------------------------------------\n");
    // Pointer to pointer - Pointer variable stores the address of another pointer variable. 
    // This is called as double pointer
    ptr2 = &ptr1;
    printf("Address of a = %x, ptr1 = %x, and ptr2 = %x\n", &a, &ptr1, &ptr2);
    printf("Value stored in a = %d, ptr1 = %x, and ptr2 = %x\n", a, ptr1, ptr2);
    printf("ptr1 is pointing the variable = %d\n", *ptr1);
    printf("ptr1 is pointing the variable = %x\n", *(&ptr1));
    printf("ptr2 is pointing the another pointer variable = %d\n", **ptr2);

    return 0; 
}
