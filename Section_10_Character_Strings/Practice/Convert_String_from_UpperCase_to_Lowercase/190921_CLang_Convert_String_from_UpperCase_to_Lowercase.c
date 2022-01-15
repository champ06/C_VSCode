/*
* Convert String from Uppercase to lowercase
*/

#include<stdio.h>
#include<string.h>
#define MAX_BYTES 100

int main()
{
    char s1 [MAX_BYTES];
    int flag = 0, length = 0;
    gets(s1);
    // gets(s2);

    length = strlen(s1);

    // Without using standard function
    // for(int i = 0; i < length; i++)
    for(int i = 0; s1[i] != '\0'; i++)
    {
        // if(s1[i] >= 65 && s1[i] <= 90)
        if(s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s1[i] = s1[i] + 32;
        }
        else
        {
            continue;
        }
    }

    // Using strlwr() function
    

    printf("%s", s1);


    return 0;
}
