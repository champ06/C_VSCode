#include <stdio.h>

int main(void) {
    
    int T, a, b, s, i = 0;
    // T = Total number of Test Cases
    // a, b = Integers
    
    scanf("%d\n", &T);
    
    for(i = 0; i < T; i ++)
    {
        scanf("%d%d", &a, &b);
        s = a + b;
        printf("%d\n", s);
    }
    
	// your code goes here
	return 0;
}