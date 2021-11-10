/*
** Printing patterns
**      *
**      **
**      ***
**      ****
**      *****
*/

#include<stdio.h>

int main()
{
    int num = 0;

    printf("Enter the number to print the pattern of (*) stars = ");
    scanf("%d", &num);

    for (int i = 1 ; i <= num ; i++)
    {
        for (int j = 1 ; j <= i; ++j)
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;
}


/*
int main()
{
    int num = 0;

    printf("Enter the number to print the pattern of (*) stars = ");
    scanf("%d", &num);

    for (int i = 1 ; i <= num ; i++)
    {
        for (int j = i ; j > 0; --j)
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;
}
*/


/*
** Printing patterns
**      *****
**      *****
**      *****
**      *****
**      *****
*/


/*
int main()
{
    int num = 0;

    printf("Enter the number to print the pattern of (*) stars = ");
    scanf("%d", &num);

    for (int i = 1 ; i <= num ; i++)
    {
        for (int j = num ; j > 0; --j)
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;
}
*/