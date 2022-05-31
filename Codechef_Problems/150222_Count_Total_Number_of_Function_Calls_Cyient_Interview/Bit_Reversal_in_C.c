#include <stdio.h>

int main()
{
    // printf("Hello World");
    int a = 13; //0000 1101
    
    // 1011 0000
    
    int mask = 1;
    int result = 0;
    
    for (int i = 0; i < 32; i++){
        int b = a & mask; //To ioslate the last bit from variable
        a = a >> 1;
        result = (result | b) << (31 - i);
            
    }
    printf("%d\n", result);
    printf("%X\n", result);

    return 0;
}
