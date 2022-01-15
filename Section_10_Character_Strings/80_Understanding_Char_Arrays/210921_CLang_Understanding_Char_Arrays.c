/*
** Understanding the character Arrays
*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    // Finding length of string without using the strlen
    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int length = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        ++length;
    }
    printf("Total length of string = %d\n\n", length);

    // Write program to concatenate 2 strings and store in another string without using strcat function
    const char str1[] = "Rakuram";
    const char str2[] = "ICS";
    char result[50];

    int length1 = 0, length2 = 0, length3 = 0;

    length1 = strlen(str1);
    printf("Str 1 length is %d\n", length1);
    length2 = strlen(str2);
    printf("Str 2 length is %d\n", length2);

    for (int i = 0; i < length1; i++)
    {
        result[i] = str1[i];
    }
    length3 = strlen(result);
    for (int j = 0; j < length2; j++)
    {
        result[length3 + j] = str2[j];
    }
    printf("Concatenated String is %s\n\n", result);
    
    // Compare 2 strings without using strcmp function
    const char str3[] = "Rakuram";
    const char str4[] = "Rakuram";
    bool boolean = true;

    for (int i = 0; str3 != '\0' && str4 != '\0'; i++)
    {
        if(str3[i] != str4[i])
        {
            boolean = false;
            break;
        }
        else
        {
            boolean = true;
        }
    }
    printf("Str3 & str4 are %s\n", (boolean == true)?"equal":"not equal");
    return 0;
}