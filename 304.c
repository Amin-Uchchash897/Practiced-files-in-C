/*
    String length finding without strlen() function in C.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World";

    int index = 0, length = 0;

    while (str[index] != '\0')
    {
        index++;
        length++;
    }

    printf("The length of str[%d] = %d\n", index, length);

    getch();
}
