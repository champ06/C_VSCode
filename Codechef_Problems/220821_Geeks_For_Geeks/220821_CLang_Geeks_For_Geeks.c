/*
#include<stdio.h>
#define PRINT(x) (#x)
int main()
{ 
  printf("%s",PRINT(geeks));
  return 0;
}
*/

/*
#include <stdio.h>
  
#define INFO 1
#define ERR 2
#define STD_OUT stdout
#define STD_ERR stderr
  
#define LOG_MESSAGE(prio, stream, msg, ...) do {\
                        char *str;\
                        if (prio == INFO)\
                            str = "INFO";\
                        else if (prio == ERR)\
                            str = "ERR";\
                        fprintf(stream, "[%s] : %s : %d : "msg" \n", \
                                str, __FILE__, __LINE__, ##__VA_ARGS__);\
                    } while (0)
  
int main(void)
{
    char *s = "Hello";
    // printf("%s\n", s);
  
    // display normal message
    LOG_MESSAGE(ERR, STD_ERR, "Failed to open file");
  
    // provide string as argument
    LOG_MESSAGE(INFO, STD_OUT, "%s Geeks for Geeks", s);
  
    // provide integer as arguments
    LOG_MESSAGE(INFO, STD_OUT, "%d + %d = %d", 10, 20, (10 + 20));
  
    return 0;
}
*/

/*
#include <stdio.h>
 
// Driver Code
int main()
{
    {
        int x = 10, y = 20;
        {
            // The outer block contains
            // declaration of x and
            // y, so following statement
            // is valid and prints
            // 10 and 20
            printf("x = %d, y = %d\n", x, y);
            {
                // y is declared again,
                // so outer block y is
                // not accessible in this block
                int y = 40;
 
                // Changes the outer block
                // variable x to 11
                x++;
 
                // Changes this block's
                // variable y to 41
                y++;
 
                printf("x = %d, y = %d\n", x, y);
            }
 
            // This statement accesses
            // only outer block's
            // variables
            printf("x = %d, y = %d\n", x, y);
        }
    }
    return 0;
}
*/

#include<stdio.h>
 
int main()
{
    // Initialization of local variables
    int x = 1, y = 2, z = 3;
 
    printf("x = %d, y = %d, z = %d\n",
    x, y, z);
    {
 
        // changing the variables x & y
        int x = 10;
        float y = 20;
         
        printf("x = %d, y = %f, z = %d\n",
        x, y, z);
        {
 
            // changing z
            int z = 100;
            printf("x = %d, y = %f, z = %d\n",
            x, y, z);
        }
    }
    // float y = 21;
    printf("x = %d, y = %f, z = %d\n", x, y, z);

    printf("x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}