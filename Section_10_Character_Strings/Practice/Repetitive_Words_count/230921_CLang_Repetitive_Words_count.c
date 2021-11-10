/*
** Repetititve Words Count
** String: aabbccc
** Result: a = 2, b = 2, c = 3
*/

#include <stdio.h>
#include <string.h>
 
int main()
{
    char inputString[100];  
    int  i, j, k, count = 0, n;
 
    printf("Enter the string : ");
    gets(inputString);

    n = strlen(inputString);

	printf("Frequency count character in string:\n");
 
    for(i = 0; i < n; i++)  
    {
     	count = 1;
    	if(inputString[i] != '\0')
    	{
		
 		  	for(j = i + 1; j < n; j++)  
	      	{   
	    		if(inputString[i] == inputString[j])
    	    	{
                	count++;
                 	inputString[j] = '\0';
	     		}
			}  
			printf(" '%c' = %d \n",inputString[i],count);
		}  
 	}  
    return 0;
}