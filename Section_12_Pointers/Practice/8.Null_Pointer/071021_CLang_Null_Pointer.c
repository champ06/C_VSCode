/*
** Null Pointer
*/

#include<stdio.h>

int main()
{
    /*
    int *ptr2 = NULL;
    printf("%d\n", ptr2);
    
    if(ptr2 == NULL)
        printf("This is null pointer");
    else
        printf("%d\n", *ptr2);      // Gives Error
    */

    // 2 Null Pointer
    
    /*
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    if(ptr1 == ptr2)
        printf("Both are null pointers");
    else
        printf("%d\n", *ptr2);      // Gives Error
    */
    
    // Uninitialized pointer comparision
    int *ptr1;
    // int *ptr2;
    int *ptr3;
    if(ptr1 == ptr3)
        printf("Both are null pointers");
    else
        printf("%d\n", *ptr3);      // Gives Error
    return 0;
}