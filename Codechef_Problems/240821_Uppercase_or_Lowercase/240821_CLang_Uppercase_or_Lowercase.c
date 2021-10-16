/*
* Program to find entered character is upper case or lower case
*/

#include<stdio.h>

int main()
{
    int charEntered;
    printf("Enter the character you want to find uppercase or lowercase\n");
    scanf(" %c", &charEntered);

    if(charEntered >= 65 && charEntered <= 90)
        printf("%c is a Uppercase Character", charEntered);
    else if (charEntered >= 97 && charEntered <= 122)
        printf("%c is a Lowercase character", charEntered);
    else
        printf("%c is not a alphabets", charEntered);
    return 0;
}