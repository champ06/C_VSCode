#include <stdio.h>
#include <stdlib.h>

int main(){

int value = 0;
printf("Enter the value = ");
scanf("%d", &value);
char a[5][30] = {"one", "two", "three", "four", "five"};

if (value < 6)
    printf("%s", a[value-1]);
else
    printf("Entered value is out of range");

return 1;
}
