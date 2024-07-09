/*
    String comparison with strcmp() function in C.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char firstName[50];
    char secondName[20];

    printf("Enter your first name : ");
    gets(firstName);
    printf("Enter your second name : ");
    gets(secondName);

    int resultOfComparison = strcmp(firstName, secondName);

    printf("The comparison result is = %d\n", resultOfComparison);

    getch();
}
