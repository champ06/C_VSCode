/*
** Guess the Number Game
** Udemy Activity 
*/ 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    time_t t;
    int randomNumber;
    srand((unsigned)time(&t));
    randomNumber = rand() % 21;

    printf("This is a GUESSING Game\n");
    printf("I have chosen a number between 0 and 20 which you have to guess\n");

    // printf("%d", randomNumber);

    for (int i = 1; i <= 5; i++)
    {
        int EnteredNumber;
        scanf ("%d", &EnteredNumber);
        printf ("%d\n", EnteredNumber);

        if (randomNumber > EnteredNumber)
        {
            printf("Entered number is too LOW\n");
        }
        
        else if (randomNumber < EnteredNumber)
        {
            printf("Entered number is too HIGH\n");
        }

        else if (randomNumber == EnteredNumber)
        {
            printf("You entered correct number\n");
            break;
        }
    }

    return 0;
}