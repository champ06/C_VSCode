/*
* Reverse a srings
*/

#include<stdio.h>
#include<string.h>
#define MAX_BYTES 100

int main()
{
    char s1 [MAX_BYTES], s2[MAX_BYTES], temp;
    int flag = 0, length = 0;
    gets(s1);
    // gets(s2);


    length = strlen(s1);

    // Without using strrev() function
    /*
    for (int i = 0; i < length / 2; i++)
    {
        temp = s1[i];
        s1[i] = s1[length - 1 - i];
        s1[length - 1 - i] = temp;
    }
    */

    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = s1[i];
        s1[i] = s1[j];
        s1[j] = temp;
    }

    printf("%s", s1);


    return 0;
}
