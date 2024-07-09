/*
    String length finding with strlen() function in C.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World";

    int lengthOfString = strlen(str);

    printf("The Length of string = %d\n", lengthOfString);

    getch();
}
