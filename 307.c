/*
    String concatenation without strcat() function.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char firstName[50], secondName[20];
    int indexFirst = 0, indexSecond = 0, length = 0;

    printf("Enter your first name please : ");
    gets(firstName);
    printf("Enter your second name please : ");
    gets(secondName);

    while (firstName[indexFirst] != '\0')
    {
        indexFirst++;
        length++;
    }

    while (secondName[indexSecond] != '\0')
    {
        firstName[length + indexSecond] = secondName[indexSecond];
        indexSecond++;
    }

    printf("User name(firstName = ) : %s\n", firstName);

    getch();
}
