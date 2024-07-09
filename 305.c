/*
    String copy and concate in C.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str1[] = "Hello World";
    char str2[20];
    char str3[] = " in C.";

    strcpy(str2, str1);
    strcat(str1, str3);

    printf("\nstr2 = %s\n", str2);
    printf("str1 = %s\n\n", str1);

    getch();
}
