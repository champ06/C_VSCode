/*
** Pointer - Arithmetic Operations - Increment and Decrement
*/

#include<stdio.h>

int main()
{
    int a[5] = {3, 2, 67, 0, 56};
    int d;
    
    for(int i = 0; i < 5; i++)
    {
        printf("Address of element %d is hex = %x and in int = %u\n", i + 1, &a[i], &a[i]);
    }

    int *ptr1, *ptr2;

    ptr1 = a;
    ptr1++;     // This will point to 2nd element
    printf("Value at address ptr1 = %d\n", *ptr1);

    // this will point to 2nd element and after printing ptr1 will have 3rd element address
    printf("Displaying and incrementing the value of ptr1 = %d\n", *ptr1++);    

    // this will return the 4th element as a result. Bcoz at the end of last operation, ptr1 is pointing to 3rd element. 
    // In ++ptr1, we're incrementing the value and then printing. So it will point to 4th element
    printf("Incrementing and Displaying the value of ptr1 = %d\n", *(++ptr1));    

    ptr2 = &a[2];
    // Associvity is from Right to Left
    printf("%d, %d, %d\n", *--ptr2, *--ptr2, *--ptr2);

    ptr2 = &a[2];
    printf("%d, %d, %d\n", --(*ptr2), (*ptr2)++, ++(*ptr2));
    return 0; 
}

/*
#include <stdio.h>
int main(void)
{
    int arr[] = {10, 20};
    int *p = arr;
    *p++;
    printf("arr[0] = %d, arr[1] = %d, *p = %d", arr[0], arr[1], *p);
    return 0;
}
*/