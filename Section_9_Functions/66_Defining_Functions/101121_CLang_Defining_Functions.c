/*
* Defining Functions in C
*/

#include<stdio.h>
#include<string.h>

// Function Prototype
// Without function prototype, compilation will return the error/warning
// Comment it out the prototype to see the difference
void add ();

// Calling function in main
int main()
{
    add();
    return 0;
}

// Defining the function
void add()
{
    printf("Hello from add function\n");
}

