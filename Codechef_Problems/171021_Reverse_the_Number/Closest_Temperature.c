#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int n,i; // the number of temperatures to analyse
    scanf("%d", &n); fgetc(stdin);
    char temps[257]; // the n temperatures expressed as integers ranging from -273 to 5526
    fgets(temps, 257, stdin); // the n temperatures expressed as integers ranging from -273 to 5526
    int min=temps[0];
    for(i=1;i<n;i++){
        if(temps[i]>1){
            if(temps[i]<min){
                min=temps[i];
                }
        }else if(temps[i]<-1){
            if(temps[i]>min){
                min=temps[i];    
            }
        }else{
            min=temps[i];
            break;
        }  
    }
    
    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
 
    printf("%i",min);
 
    return 0;
}