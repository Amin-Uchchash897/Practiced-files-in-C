/*
    String concatenation without strcat() function.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str1[50] = "Hello World";
    char str2[] = " in C.";

    int indexFirst = 0, length = 0;
    int indexSecond = 0;

    while (str1[indexFirst] != '\0')
    {
        indexFirst++;
        length++;
    }

    while (str2[indexSecond] != '\0')
    {
        str1[length + indexSecond] = str2[indexSecond];
        indexSecond++;
    }

    printf("str1 = %s\n", str1);
    printf("\n");

    getch();
}
