/*
* Author: Rakuram
* Purpose: Create and Use Enum Type
* Date: 08-08-2021
*/

#include<stdio.h>

int main()
{
    // enum's are represented in integer with index starts from 0

    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT};

    enum Company comp_xerox, comp_google, comp_ebay;

    comp_xerox = XEROX;
    comp_google = GOOGLE;
    comp_ebay = EBAY;

    printf("The value of company xerox is %d\n", comp_xerox);
    printf("The value of company google is %d\n", comp_google);
    
    // Reason why EBAY prints 11, YAHOO is set as 10. 
    // So variables which are after YAHOO will have new index based on previous values
    
    printf("The value of company ebay is %d\n", comp_ebay);

    return 0;
}