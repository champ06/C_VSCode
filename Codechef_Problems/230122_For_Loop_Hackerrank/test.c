#include <stdio.h>

int main(){

int value = 0;
scanf("%d\n", &value);
char a[5][30] = {"one", "two", "three", "four", "five"};

if (value <= 6)
    printf("%s", a[value-1]);
else
    printf("Entered value is out of range");

}
