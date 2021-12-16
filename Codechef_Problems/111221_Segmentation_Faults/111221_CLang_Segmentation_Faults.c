/*
* Segmentation Faults   
*/

#include <stdio.h>


int main(void)
{
    
    // Segmentation Faults while trying to read-only memory
    char *s = "Hello, Everyone";
    *s = 'h';

    /*
    // By using scanf()
    int ch = 10;
    scanf("%d", ch);
    */
    
    /*
    // Accessing memory outside of assigned value
    int a[10];
    a[11] = 100;
    */
    return 0;
}