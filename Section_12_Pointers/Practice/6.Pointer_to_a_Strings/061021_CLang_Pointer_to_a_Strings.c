/*
** Pointer to a string
*/

#include<stdio.h>
/*
int main()
{
    // const -- Read-only memory
    const int a = -11;
    
    // If the variable is of const type, then pointer should also need to be const type
    const int *ptr1;    

    ptr1 = &a;
    printf("%d\n", *ptr1);

    *ptr1 = 10;
    printf("%d\n", *ptr1);
    return 0; 
}
*/

int main()
{
    char str[] = "Welcome to Jenny's Lectures";
    char *ptr = str;

    printf("%c\n", *ptr);
    printf("%c\n", *(ptr++ + 1));
    printf("%c\n", *((ptr-- + 5) - 1) + 3);
    printf("%c\n", *(++ptr + 10) - 32);
    printf("%c, %c, %c\n", *ptr, *++ptr, *--ptr);
    return 0;
}