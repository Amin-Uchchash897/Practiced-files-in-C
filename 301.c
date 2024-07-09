/*
    Getting input in C.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char carName[30];

    printf("\nPlease enter the buses name which you wish to travel : ");
    // scanf("%s", &carName);
    gets(carName); // gets() function perform as same as scanf() function.

    printf("%s\n\n", carName);

    getch();
}
