/*
** Multidimensional Arrays in C
**
*/

#include<stdio.h>
#define MONTHS 12

int main()
{   
    int a[3][3] = {{0, 1, 2},
                   {3, 4, 5},
                   {6, 7, 8}
                   };
    
    for(int i = 0; i < 3; i++)
    {
        for( int j = 0; j < 3; j++)
        {
            printf("Array Value of a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }

    return 0;
}