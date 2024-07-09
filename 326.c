/*
    Write a C program to find number of vowels, consonants, words, digits and other
    from a string.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

void main()
{
    char userName[1000];
    int ch;
    int index, vowel, consonant, digit, word, other;

    printf("Please enter your user name : ");
    gets(userName);

    index = vowel = consonant = digit = word = other = 0;

    while ((ch = userName[index]) != '\0')
    {
        // Checking condition for Vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowel++;
        }
        // Checking condition for Consonant
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            consonant++;
        }
        // Checking condition for Digit
        else if (ch >= '0')
        {
            digit++;
        }
        // Checking condition for Word
        else if (" ")
        {
            word++;
        }
        else
        {
            other++;
        }

        index++;
    }

    word++;

    printf("\nNumber of vowels = %d\n", vowel);
    printf("Number of consonants = %d\n", consonant);
    printf("Number of digits userName[%d]= %d\n", digit,digit);
    printf("Number of words = %d\n", word);
    printf("Number of others = %d\n\n", other);

    getch();
}
