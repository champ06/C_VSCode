/*
* Author: Rakuram
* Purpose: Reading Input from the Terminal
* Date: 02-08-2021
*/

#include<stdio.h>

int main()
{
    char str[100];
    int i;
    float j;
    printf("Enter a Value: ");
    scanf("%s %d %f", str, &i, &j);

    printf("\nYou Entered: \n%s \n%d \n%f", str, i, j);
    return 0;
}