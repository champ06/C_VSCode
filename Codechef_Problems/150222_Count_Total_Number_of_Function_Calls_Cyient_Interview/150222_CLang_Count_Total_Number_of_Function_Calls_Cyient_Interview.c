#include <stdio.h>
static int add(int, int);

static int count;

int main()
{
    // int count = 0;
    int result = add(1, 2);
    printf("%d\n", count);
	printf("%d\n", result);
    return 0;    
}

int add(int a, int b)
{
	count++;
    int sum = 0;
    sum = a + b;
    return sum;
}


