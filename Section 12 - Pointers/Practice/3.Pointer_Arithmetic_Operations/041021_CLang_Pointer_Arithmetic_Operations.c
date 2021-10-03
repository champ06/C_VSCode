/*
** Pointer - Arithmetic Operations
*/

#include<stdio.h>

int main()
{
    int a[5] = {1, 4, 2, 10, -1};
    
    for(int i = 0; i < 5; i++)
    {
        printf("Address of element %d is hex = %x and in int = %u\n", i + 1, &a[i], &a[i]);
    }

    int *ptr1;

    ptr1 = &a[0];

    printf("Value is: %d\n", *ptr1);
    printf("Address is: %u\n", ptr1);

    ptr1 = ptr1 + 2; 
    printf("Value is: %d\n", *ptr1);
    printf("Address is: %u\n", ptr1);

    /*
    a[0] = a[0] + 2;
    printf("Value is: %x\n", a);
    */
    return 0; 
}
