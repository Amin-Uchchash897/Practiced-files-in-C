/*
    This challenge will help you to learn how to take a character, a string and a sentence as
    input in C.

    To take a single character  as input, you can use scanf("%c", &ch ); and printf("%c", ch)
    writes a character specified by the argument char to stdout

    char ch;
    scanf("%c", &ch);
    printf("%c", ch);
    This piece of code prints the character .

    You can take a string as input in C using scanf(“%s”, s). But, it accepts string only
    until it finds the first space.

    In order to take a line as input, you can use scanf("%[^\n]%*c", s); where s is defined as
    char s[MAX_LEN] where MAX_LEN is the maximum size of s. Here, [] is the scanset character.
    ^\n stands for taking input until a newline isn't encountered. Then, with this %*c, it
    reads the newline character and here, the used * indicates that this newline character is
    discarded.

    Note: The statement: scanf("%[^\n]%*c", s); will not work because the last statement will
    read a newline character, \n, from the previous line. This can be handled in a variety of
    ways. One way is to use scanf("\n"); before the last statement.

    Task
    You have to print the character,ch, in the first line. Then print  in next line. In the
    last line print the sentence, sen.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
// #include <stdlib.h>

int main()
{
    /*
    char ch;
    // fgets(ch, sizeof(ch), stdin);
    scanf("%c", &ch);
    printf("%c", ch);

    char s[100];
    scanf("%s", &s);
    //fgets(s, sizeof(s), stdin);
    printf("%s\n", s);

    char sen[100];
    fgets(sen, sizeof(sen), stdin);
    printf("%s\n", sen);
    */

    // char
    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);

    // string
    char str[59];
    scanf("%s", &str);
    printf("%s\n", str);

    // line
    /* 
        scanf(“%[^\n]%*c”,name); means that all the characters entered as the input, 
        including the spaces, until we hit the enter button are stored in the variable, name;
    */
    char s[1000];
    scanf("%[^\n]%*c", s);
    printf("%s", s);

    return 0;
}
