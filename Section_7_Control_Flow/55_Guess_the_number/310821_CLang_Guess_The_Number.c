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

    for (int numberOfGuesses = 5; numberOfGuesses >= 1; numberOfGuesses--)
    {
        int EnteredNumber;
        printf("You have %d tr%s left\n", numberOfGuesses, numberOfGuesses == 1 ? "y" : "ies");
        scanf ("%d", &EnteredNumber);
        // printf ("%d\n", EnteredNumber);
        
        if (EnteredNumber < 0 || EnteredNumber > 20)
        {
            printf("Invalid Number %d Entered\n\n", EnteredNumber);
        }
        

        else if (randomNumber > EnteredNumber)
        {
            printf("Guessed number %d is too LOW\n\n", EnteredNumber);
        }
        
        else if (randomNumber < EnteredNumber)
        {
            printf("Guessed number %d is too HIGH\n\n", EnteredNumber);
        }

        else if (randomNumber == EnteredNumber)
        {
            printf("Congratulations! You guessed correct number %d\n\n", EnteredNumber);
            return 0;
        }
    }
    printf("Correct number is %d", randomNumber);
    return 0;
}