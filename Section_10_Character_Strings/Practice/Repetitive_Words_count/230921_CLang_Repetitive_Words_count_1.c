/*
** Repetititve Words Count
** String: aabbccc
** Result: a = 2, b = 2, c = 3
*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char testString[100] = "aabbbccccddeeggzzqqrr\\0011@@##778855ja";
    char placeHolder[30], conCheck = '\0';
    int count = 0;
    // int length = strlen(string);
    // Check for the unique characters
    for (int i = 0; testString[i] != '\0'; i++)
    {
        if(testString[i] != conCheck)
        {  

            placeHolder[count] = testString[i];
            conCheck = testString[i];
            count++;
        }
    }
    printf("%s\n", placeHolder);
/*
// Working Code
    for (int i = 0; testString[i] != '\0'; i++)
    {
        if(testString[i] != conCheck)
        {  
            placeHolder[count] = testString[i];
            conCheck = testString[i];
            count++;
        }
    }
    printf("%s\n", placeHolder);

    // Count the unique characters repetition
    int counter; 
    int length = strlen(placeHolder);
    for (int i = 0, counter = 0; placeHolder[i] != '\0' ; i++)
    {
        conCheck = placeHolder[i];
        for (int j = 0; j < length; j++)
        {
            if (testString[j] == conCheck && testString[j] != '\0')
            {
                ++counter;
            }
        }
        printf("Total count of character %c is %d\n", conCheck, counter);
        counter = 0;
        // printf("\n");
    }
*/
    return 0;
}
