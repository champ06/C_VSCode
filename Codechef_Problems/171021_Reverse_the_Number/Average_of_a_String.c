#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int len_s;
    scanf("%d", &len_s); 
    fgetc(stdin);
    char s[257];
    scanf("%[^\n]", s);
    float avg;
    int sum = 0;
    for (int i = 0; i < len_s; i++)
    {
        sum = sum + s[i];
    }
    avg = sum/len_s;
    //printf("%f", avg);
    printf("%c", (char)avg);
    return 0;
}