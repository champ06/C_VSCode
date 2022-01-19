/*
* Array as a Function Arguments 
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void DoubleOfAllElements(int a[], int size)
{
    int i, sum = 0;
    
    for (i = 0; i < size; i++)
    {
        a[i] *= 2;
    }
    // return sum;
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int total = 0;

    int size = sizeof(a)/sizeof(a[0]);
    printf("Size of Array = %d\n", size);
    
    DoubleOfAllElements(a, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}