/*
    Write a C program to swap a string.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

void main()
{
    char userFirstTitle[1000];
    gets(userFirstTitle);
    char userSecondTitle[1000];
    gets(userSecondTitle);
    char temporaryTitle[1000];

    // Printing user first and second title before swapping
    printf("\n%s", userFirstTitle);
    printf("\n%s\n", userSecondTitle);

    strcpy(temporaryTitle, userFirstTitle);
    strcpy(userFirstTitle, userSecondTitle);
    strcpy(userSecondTitle, temporaryTitle);

    // After swapping
    printf("\n%s\n", userFirstTitle);
    printf("%s\n", userSecondTitle);

    getch();
}
