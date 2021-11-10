/*
** Sorting - Using the strcmp() & strcpy() functions
*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char string[100];
    char name[25][50], temp[25];
    int i, l, n, j;

    printf("Enter the String which needs to be reversed : ");
    // scanf("%s", string);
    gets(string);
    printf("---------------------------------------------------------\n");
    printf("String without reversing : %s\n", string);

    l = strlen(string);
    // printf("%d\n", l);
    printf("String after reversing : ");
    for (int i = l - 1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }
    
    printf("\n---------------------------------------------------------");

    printf("\n\nSorting Strings using Bubble sort : \n");
    printf("\n---------------------------------------------------------");
    printf("\nInput number of strings : ");
    scanf("%d", &n);
    // printf("\nInput Strings %d : ", n);

    for (i = 0; i < n; i++)
    {   
        printf("\nInput Strings %d : ", i + 1);
        scanf("%s", name[i]);
    }
    
    printf("\nStrings Before sorting\n");
    printf("\n---------------------------------------------------------\n");
    for(i = 0; i <= n; i++)
    {
        printf("%s\n", name[i]);
    }

    // Bubble sort algorithm for strings
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= n - i; j++)
        {
            if(strcmp(name[j], name[j + 1]) > 0)
            {
                strncpy(temp, name[j], sizeof(temp) - 1);
                strncpy(name[j], name[j + 1], sizeof(name[j]) - 1);
                strncpy(name[j + 1], temp, sizeof(name[j + 1]) - 1);
            }
        }
    }

    printf("Strings after sorting\n");
    printf("\n---------------------------------------------------------");
    for(i = 0; i <= n; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}