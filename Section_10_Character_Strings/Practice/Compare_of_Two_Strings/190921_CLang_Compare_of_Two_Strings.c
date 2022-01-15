/*
* Compare of 2 srings
*/

#include<stdio.h>
#include<string.h>
#define MAX_BYTES 100

int main()
{
    char s1 [MAX_BYTES], s2[MAX_BYTES];
    int flag = 0;
    gets(s1);
    gets(s2);

    // Using strcmp function
    // flag = strcmp(s1, s2);

    // Using for loop
    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if(s1[i] != s2[i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("Same");
    }
    else
    {   
        printf("Strings are not same");   
    }
    return 0;
}
