/*
* Read and Print Strings 
*/

#include<stdio.h>

int main()
{
    char a[10] = "Rakuram E";
    char b[] = "123456";
    char c[5] = "Hello";
    char d[] = {'h', 'e', 'l', 'l', 'o', ' ', 'a', 'l', 'l'};
    char e[5] = "Raku";
    char f[50];
    char g[50];

    printf("Printing the Strings using 'printf' function\n");
    printf("%s\n", a);
    printf("%s\n", b);
    printf("%s\n", c);
    printf("%s\n", d);
    printf("%s\n", e);

    printf("Getting input from users by 'scanf' function and printing them using 'printf' function\n");
    // scanf("%s", f);
    // printf("%s", f);

    gets(g);
    // puts(g);
    printf("%s", g);
    printf("%.5s", g);
    printf("%10.5s", g);
    puts(g);
    puts(g);

    return 0;
}
