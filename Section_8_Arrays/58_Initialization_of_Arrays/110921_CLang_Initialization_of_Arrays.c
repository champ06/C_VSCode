/*
** Initialization of Arrays
**
*/

#include<stdio.h>

int main()
{   

    float a[5] = {[4] = 100};
    printf("Float Value of 5th Element = %.2f\n", a[4]);

    for(int i = 0; i <= 4; i++)
    {
        if (i == 4)
        {
            break;
            printf("Already printed. Skipping the loop\n");
            continue;
        }
        else
            printf("Array value of element %d = %.2f\n", i, a[i]);
    }

    return 0;
}