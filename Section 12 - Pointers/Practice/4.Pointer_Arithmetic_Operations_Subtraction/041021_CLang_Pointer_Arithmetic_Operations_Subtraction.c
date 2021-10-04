/*
** Pointer - Arithmetic Operations - Addition
*/

#include<stdio.h>

int main()
{
    int a[5] = {1, 4, 2, 10, -1};
    int d;
    
    for(int i = 0; i < 5; i++)
    {
        printf("Address of element %d is hex = %x and in int = %u\n", i + 1, &a[i], &a[i]);
    }

    int *ptr1, *ptr2;

    ptr1 = &a[0];
    ptr2 = &a[4];
    printf("Address of ptr1: %u\n", ptr1);
    printf("Address of ptr2: %u\n", ptr2);
    d = ptr1 - ptr2;
    printf("Value of d = %d\n", d);
    printf("---------------------------------------\n\n");
    
    *ptr2 = 25;
    d = ptr2 - ptr1;
    printf("Value of d = %d\n", d);
    printf("---------------------------------------\n\n");
    
    *ptr1 = 27;
    ptr2 = ptr2 - 3;
    printf("Value of d = %u\n", ptr2);
    printf("---------------------------------------\n\n");
    
    ptr1 = ptr1 + 3;
    printf("Value of d = %u\n", ptr1);
    printf("---------------------------------------\n\n");

    d = ptr1 - ptr2;
    printf("Value of d = %d\n", d);
    printf("---------------------------------------\n\n");
    return 0; 
}
