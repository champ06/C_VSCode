/*
** Calculate the Sum and Average of 5 Students
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TOTALSTUDENTS 5

int main()
{

    int marks[TOTALSTUDENTS], i;
    float averageMarks = 0, totalMarks = 0;

    for (i = 0; i < 5; ++i)
    {
        printf ("Enter the marks for Student %d = ", i + 1);
        scanf ("%d", &marks[i]);
        totalMarks += marks[i];
    }

    averageMarks = totalMarks/TOTALSTUDENTS;

    printf("\nTotal Marks = %.2f\n", totalMarks);
    printf("Average Marks = %.2f\n", averageMarks);

    return 0;
}