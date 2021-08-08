/*
* Author: Rakuram
* Purpose: Create and Use Enum Type
* Date: 08-08-2021
*/

#include<stdio.h>

int main()
{
    // enum's are represented in integer with index starts from 0
    
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company Enum_1, Enum_2, Enum_3;

    Enum_1 = XEROX;
    Enum_2 = GOOGLE;
    Enum_3 = EBAY;

    printf("Enum 1 is %d\n", Enum_1);
    printf("Enum 2 is %d\n", Enum_2);
    printf("Enum 3 is %d\n", Enum_3);

    return 0;
}