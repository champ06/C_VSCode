/*
* Analysing Strings using string functions like islower(), isupper(), isalpha(), etc
*/

// islower() - Tests for lowercase character

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    // strchr() Example
    // printf("islower() Example\n");
    
    char c[100];
    int nDigits = 0, nLetters = 0, nPunct = 0;

    printf("Enter the array of characters\n");
    scanf("%s", c);

    int i = 0;
    while (c[i])
    {
        if(isalpha(c[i]))
            ++nLetters;
        else if(isdigit(c[i]))
            ++nDigits;
        else if(ispunct(c[i]))
            ++nPunct;
        ++i;
    }

    printf("Entered string has %d alphabets, %d numbers and %d punctual characters\n", nLetters, nDigits, nPunct);
     
    return 0;
}