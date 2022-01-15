/*
*
* Find the Length of a string
*
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char a[15] = "Rakuram E";
    int length = 0, i = 0;
    /*
    length = strlen(a);
    printf("Length of the string = %d", length);
    */

    while (a[i] != '\0')
    {
        length += 1;
        i += 1;
    }
    printf("Length of String = %u", length);


    return 0;
}
