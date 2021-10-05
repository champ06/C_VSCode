#include<stdio.h>

int main()
{
    int a[] = {10, 11, -1, 56, 67, 5, 4};
    int *p, *q;

/*
    p = a; 
    printf("%d\n", *p);
    printf("%d, %d, %d\n", (*p)++, *p++, *++p);
    printf("%d\n", *p);

    printf("----------------------------------\n");
    printf("\n");
    
    q = p + 3;
    printf("%d\n", *q);
    printf("%d\n", *q-3);
    printf("%d\n", *--p+5);
    printf("%d\n", *p+*q);
*/
    p = a;
    q = &a[0] + 3;
    printf("%d, %d, %d\n", (*p)++, (*p)++, *++p);
    printf("%d\n", *p);

    printf("%d\n", (*p)++);
    printf("%d\n", *p);

    printf("%d\n", (*p)++);
    printf("%d\n", *p);

    printf("--------------------------\n\n");
    printf("%d\n", *q);
    q--;
    printf("%d\n", *q);
    printf("%d, %d\n", (*(q + 2))--, *q);
    printf("%d\n", *q);

    printf("--------------------------\n\n");
    printf("%d\n", *p);
    printf("%d\n", *(p+2)-2);
    printf("%d\n", *p);

    printf("%d\n", *(p++ - 2)-1);
    printf("%d\n", *p);
    return 0;
}