/*
    String reverse with strrev() function in C.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char ch[50];

    printf("Enter characters : ");
    gets(ch);

    printf("\nThe resutl of reverse in characters = %s\n\n", strrev(ch));

    getch();
}
