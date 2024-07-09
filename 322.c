/*
    Given a sentence, s, print each word of the sentence in a new line.

    Input Format
    The first and only line contains a sentence, s.

    Constraints
    1 <= len(s) <= 1000

    Output Format
    Print each word of the sentence in a new line.

    Sample Input 0
    This is C

    Sample Output 0
    This
    is
    C

    Explanation 0
    In the given string, there are three words ["This", "is", "C"]. We have to print each of
    these words in a new line.

    Sample Input 1
    Learning C is fun

    Sample Output 1
    Learning
    C
    is
    fun

    Sample Input 2
    How is that

    Sample Output 2
    How
    is
    that
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int main()
{
    char s1[1000];
    printf("\n");
    gets(s1);

    int index = 0, length = 0, indexSecond;

    while (s1[index] != '\0')
    {
        length++;
        index++;
    }

    printf("\nThe length of s1 = %d\n\n", length);

    for (index = 0; index < length; index++)
    {
        if (s1[index] == ' ')
        {
            s1[index] = '\n';
            //continue;
        }
    }

    printf("%s\n", s1);

    return 0;
}
