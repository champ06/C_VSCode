/*
* Challenge - Tic Tac Toe Game
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PLAYER1 x
#define PLAYER2 o
#define ROW 3
#define COLUMN 3

char array[ROW][COLUMN];

int main()
{
    // int value = 0;
    printf ("\t    Tic Tac Toe  \n");
    printf ("Player 1 (x)\t-\tPlayer 2 (o)\n\n");
    // Assigning the values to array
    for (int i = 0, value = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            value = value + 1;
            array[i][j] = value;
            printf("\t%d", array[i][j]);
            if(j < 2)
                printf("   |");
        }
        printf("\n");
        if (i < 2)
            printf("\t------------------\n");
    }
    printf("\n");
}


