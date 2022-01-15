/*
* Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
* if employee is female, then she will work only in urban areas.
* if employee is a male and age is in between 20 to 40 then he may work in anywhere
* if employee is male and age is in between 40 to 60 then he will work in urban areas only.
* And any other input of age should print "ERROR".
*/

#include<stdio.h>

int main()
{
    int age;
    char sex, martialStatus;

    printf("Enter your Age\n");
    scanf("%d", &age);

    printf("Enter your sex (M/F) and Martial Status (Y/N)\n");
    scanf(" %c %c", &sex, &martialStatus);

    if((sex == 'M' || sex == 'm') && (age >= 20 && age <= 40))
        printf("He can work anywhere\n");
    else if((sex == 'M' || sex == 'm') && (age >= 20 && age <= 40))
        printf("He should work in urban areas\n");
    else if(sex == 'F' || sex == 'f')
        printf("She should work in urban areas\n");
    else
        printf("Error\n");

    // printf("%d %c %c", age, sex, martialStatus);

    return 0;
}