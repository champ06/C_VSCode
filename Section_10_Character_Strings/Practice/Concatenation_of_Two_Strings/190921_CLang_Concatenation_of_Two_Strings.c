/*
* Concatenation of 2 srings
*/

#include<stdio.h>
#include<string.h>
#define MAX_BYTES 100

int main()
{
    char s1 [MAX_BYTES], s2[MAX_BYTES];

    gets(s1);
    gets(s2);
    // Using strcat function
    /*
    strcat(s2, s1);
    printf("%s", s2);
    */

    // Without using the strcat function
    int len1, len2;
    len1 = strlen(s1);
    printf("%u\n", len1);
    len2 = strlen(s2);

    for(int i = 0; i <= len2; i++)
    {
        s1[len1 + i] = s2[i];
    }
    printf("%s", s1);


    return 0;
}
