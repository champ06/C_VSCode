/*
** Reverse String
*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char string[100], result[100];
    int length = 0;
    printf("Enter the String which needs to be reversed : ");
    scanf("%s", string);
    printf("String without reversing : %s\n", string);

    length = strlen(string);
    printf("%d\n", length);
    /*
    for(int i = 0; i < length; ++i)
    {
        result[i] = string[length - i - 1];
        // printf("%s", result[i]);
    }
    */

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }
    // printf("\nReversed String : %s", result);
    return 0;
}