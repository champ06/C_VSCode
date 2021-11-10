/*
* Converting Strings to numbers
*/

// ASCII to INTEGER Conversion

// atof() - Converts strings to double - ASCII to Float Function
// atoi() - Converts string to int - ASCII to Int Function
// atol() - Converts string to long int - ASCII to Long Int Function
// atoll() - Converts string to long long int - ASCII to Long Long Int Function

// If no integer is found means, it will return NAN.

// INTEGER to ASCII Conversion
// itoa - Integer to ASCII Conversion

// strtod() - String to double
// strtof() - String to float
// strtold() - String to long double

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    /*
    char str1[100];
    double value = 0;
    
    printf("Enter the array of characters for string 1\n");
    scanf("%s", str1);

    int i = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        value = atof(str1);
    }    
    printf("%.2lf\n", value);
    */

    double value = 0;
    char str[] = "1 2 3";
    char *pstr = str;
    char *ptr = NULL;

    while (1)
    {
        value = strtod(pstr, &ptr);
        if(pstr == ptr)
        {
            printf("No conversion\n");
            break;
        }
        else
        {
            printf(" %f", value);
            pstr = ptr;
        }
        
    }
    return 0;
}