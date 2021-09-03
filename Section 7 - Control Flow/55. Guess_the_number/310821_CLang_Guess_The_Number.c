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

    for (int i = 5; i >= 1; i--)
    {
        int EnteredNumber;
        printf("You have %d tries left\n", i);
        scanf ("%d", &EnteredNumber);
        // printf ("%d\n", EnteredNumber);
        if (randomNumber > EnteredNumber)
        {
            printf("\nGuessed number is too LOW\n\n");
        }
        
        else if (randomNumber < EnteredNumber)
        {
            printf("Guessed number is too HIGH\n\n");
        }

        else if (randomNumber == EnteredNumber)
        {
            printf("Congratulations! You guessed correct number\n\n");
            break;
        }
    }

    return 0;
}