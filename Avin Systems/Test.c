#include<stdio.h>
int main()
{
    const int a;
	int *x = &a;
    *x=100;
	printf("%d", a);
    return 0;
}