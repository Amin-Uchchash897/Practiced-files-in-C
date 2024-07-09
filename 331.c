/*
    Functions in C.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

void multiplicationOfNumbers(int a, int b, int c)
{
    printf("The multiplication of %d, %d & %d = %d\n", a, b, c, a * b * c);
}

int additionOfTwoNumbers(int a, int b)
{
    return a + b;
}

int main()
{
    int resultOfAddition = additionOfTwoNumbers(5, 6);

    printf("Sum = %d\n", resultOfAddition);

    resultOfAddition = additionOfTwoNumbers(5, 10);

    printf("Sum = %d\n", resultOfAddition);

    printf("The sum is : %d\n", additionOfTwoNumbers(20, 10));

    multiplicationOfNumbers(5, 10, 15);

    getch();
}
