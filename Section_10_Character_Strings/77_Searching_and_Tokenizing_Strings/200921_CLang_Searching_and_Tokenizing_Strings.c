/*
* Searching and Tokenizing Strings
*/

#include<stdio.h>
#include<string.h>

int main()
{
    // strchr() Example
    printf("strchr() Example\n");
    char str1[] = "The quick brown fox\n";
    char ch = 'q';
    char *pGot_char = NULL;
    pGot_char = strchr(str1, ch);
    printf("%s", pGot_char);

    // strstr() Example
    printf("strstr() Example\n");
    char str2[] = "The quick brown fox looks furious\n";
    char word[] = "xo";
    char *pFound = NULL;
    pFound = strstr(str2, word);
    printf("%s", pFound);

    // strtok() Example
    printf("strtok() Example\n");
    char str3[] = "The quick brown-fox looks furious";
    const char tokenizer[2] = " ";
    char *pTokenizer;
    
    pTokenizer = strtok (str3, tokenizer);

    while (pTokenizer != NULL)
    {
        printf("%s\n", pTokenizer);
        pTokenizer = strtok (NULL, tokenizer);
    }
    
    return 0;
}