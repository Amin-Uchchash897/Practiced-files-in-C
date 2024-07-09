/*
    Printing characters one by one in C.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char carName[] = "Volvo and BMW";
    int index = 0;

    int lengthOfString = sizeof(carName) / sizeof(carName[0]);
    printf("The length of carName[] = %d\n", lengthOfString);

    while (carName[index] != 0)
    {
        printf("%c\n", carName[index]);
        index++;
    }

    getch();
}
