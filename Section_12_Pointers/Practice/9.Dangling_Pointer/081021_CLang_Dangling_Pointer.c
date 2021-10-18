/*
** Dangling Pointer
*/

#include<stdio.h>
#include<stdlib.h>

/*
int *f()
{
    int a = 10;
    return &a;
}
*/

int main()
{
    /*
    // First Method
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    printf("%d\n", *ptr);
    free(ptr);
    ptr = NULL;
    // printf("%d\n", *ptr);
    */
    /*
    // Second Method
    int *ptr = f();
    printf("%d\n", *ptr);
    */
    // Third Method
    int *ptr = NULL;
    {
        int a = 5;
        ptr = &a;
        printf("a = %d\n", *ptr);
    }
    printf("a = %d\n", *ptr);
    return 0;
}