/*
* Common String Functions
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "To be or not to be";
    char str2[] = ",that is the question";
    char str3[50];
    
    // String Copy Function
    strcpy(str1, str2);
    strncpy(str3, str2, 10);
    printf("%s\n", str1);
    printf("%s", str3);
    
    // String Compare function
    /*
    printf("\n");
    printf("strcmp (\"A\", \"A\") is ");
    printf("%d\n", strcmp("A", "A"));

    printf("\n");
    printf("strcmp (\"A\", \"B\") is ");
    printf("%d\n", strcmp("A", "B"));
    
    printf("\n");
    printf("strcmp (\"B\", \"A\") is ");
    printf("%d\n", strcmp("B", "A"));

    printf("\n");
    printf("strcmp (\"apple\", \"Apple\") is ");
    printf("%d\n", strcmp("apple", "Apple"));
    */
    printf("\n");
    if (strncpy("astronomy", "astro", 5) == 0)
        {printf("Found: astronomy");}
    
    printf("\n");
    if (strncpy("astounding", "astro", 5) == 0)
        {printf("Found: astounding");}
    else   
        {printf("Found nothing");}
    return 0;
}