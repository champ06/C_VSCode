/*
** Printing Patterns 
** Assignment 1
**      1 2 3 4 5 
**      1 2 3 4
**      1 2 3
**      1 2 
**      1
*/

#include<stdio.h>

int main()
{
    int i, j, num;

    printf("Enter number of rows need to print = ");
    scanf("%d", &num);

    for (i = num; i >= 1; --i)
    {
        // printf("%d", i);
        for (j = 1; j <= i; ++j)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}


/*
** Assignment 2
**      6 5 4 3 2 1
**      6 5 4 3 2
**      6 5 4
**      6 5 
**      6
*/

/*
#include<stdio.h>

int main()
{
    int i, j, num;

    printf("Enter number of rows need to print = ");
    scanf("%d", &num);

    for (i = 1; i <= num; ++i)
    {
        // printf("%d", i);
        for (j = num; j >= i; --j)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
*/