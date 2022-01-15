/*
* Converting Strings
*/

// toupper() - Converts to uppercase character
// tolower() - Converts to lowercase character

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    // strchr() Example
    // printf("islower() Example\n");
    
    char str1[100], str2[100];
    
    printf("Enter the array of characters for string 1\n");
    scanf("%s", str1);
    printf("Enter the array of characters for string 2\n");
    scanf("%s", str2);

    int i = 0, j = 0;
    while (str1[i] != '\0')
    {
       str1[i] = toupper(str1[i]);
        ++i;
    }

    while (str2[j] != '\0')
    {
       str2[j] = tolower(str2[j]);
        ++j;
    }

    printf("%s\n", str1);
    printf("%s\n", str2);
 
/*
    char text[100], substring[40];    
    printf("Enter the array of characters for text\n");
    scanf("%s", text);
    printf("Enter the array of characters for substring 2\n");
    scanf("%s", substring);  

    printf("Entered characters for text = %s\n", text);
    printf("Entered characters for substring = %s\n", substring);

    for (int i = 0; text[i] = toupper(text[i]) != '\0'; i++)
    for (int i = 0; substring[i] = toupper(substring[i]) != '\0'; i++)

    printf("The second string %s found in the first string\n", (strstr(text, substring) == NULL ? "was not": "was"));
*/
    return 0;
}