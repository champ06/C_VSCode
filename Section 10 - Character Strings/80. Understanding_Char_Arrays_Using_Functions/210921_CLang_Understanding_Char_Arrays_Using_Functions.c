/*
** Understanding the character Arrays using Functions
*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int stringLength(const char string[]);
void stringConcat(char result[], const char string1[], const char string2[]);
bool equalStrings(const char string1[], const char string2[]);

int main()
{
    const char word1[] = "Rakuram";
    const char word2[] = "Raku";
    const char word3[] = "Rau";
    char result[50];

    printf("%d\t%d\t%d\n", stringLength(word1), stringLength(word2), stringLength(word3));

    stringConcat(result, word1, word2);
    printf("\nString concatenation of 2 string is %s", result);

    printf("\nString comparision of 2 string is %i", equalStrings(word2, word3));
    printf("\nString comparision of 2 string is %i", equalStrings("Rakuram", "Rakuram"));
    return 0;
}

int stringLength(const char string[])
{
    int count = 0;
    while (string[count] != '\0')
    {
        ++count;
    }
    return count;
}

void stringConcat(char result[], const char string1[], const char string2[])
{
    int i, j;

    for (i = 0; string1[i] != '\0'; i++)
    {
        result[i] = string1[i];
    }
    
    for(j = 0; string2[j] != '\0'; j++)
    {
        result[i + j] = string2[j];
    }
    result[i + j] = '\0';
    // return result;
}

bool equalStrings(const char string_1[], const char string_2[])
{
    int i = 0;
    bool isEquals = false;

    while(string_1[i] == string_2[i] && string_1[i] != '\0' && string_2[i] != '\0')
        ++i;
    if(string_1[i] != '\0' && string_2[i] != '\0')
        isEquals = true;
    else
        isEquals = false;

    return isEquals;
}