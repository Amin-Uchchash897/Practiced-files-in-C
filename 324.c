/*
    Write a C program to reverse a string without strrev() function.
*/

// NOTE: This code has a bug, because it doesn't print the str2. Please fixed this problem.

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int main()
{
    char str1[1000] = "Learning";
    gets(str1);
    char str2[1000];

    int i = 0, length = 0, j;

    while (i != '\0')
    {
        i++;
        length++;
    }

    for (j = 0, i = length - 1; i >= 0; i--, j++)
    {
        str2[j] = str1[i];
    }

    str2[j] = '\0';

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    int d = strcmp(str1, str2); // strcmp() will be returned 0;

    if (d == 0)
    {
        printf("%s is a palindrome.\n", str1);
    }
    else
    {
        printf("%s is not a palindrome.\n", str1);
    }

    getch();
}
