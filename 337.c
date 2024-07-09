/*
    Write a C program to create an array and call the function with different arguments and
    store the results in the array.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int sumAllMarks(int a, int b, int c, int x, int y, int z)
{
    return a + b + c + x + y + z;
}

int main()
{
    int resultOfStd[6];

    int subjectOne, subjectTwo, subjectThree, subjectFour, subjectFive, subjectSix;
    printf("Enter all of the subject marks : ");
    scanf("%d %d %d %d %d %d", &subjectOne, &subjectTwo, &subjectThree, &subjectFour, &subjectFive, &subjectSix);

    for (int index = 0; index < 6; index++)
    {
        printf("Result%d = %d\n", index + 1, resultOfStd[index]);
    }

    printf("Sum of %d %d %d %d %d %d = %d\n", subjectOne, subjectTwo, subjectThree, subjectFour, subjectFive, subjectSix, sumAllMarks(subjectOne, subjectTwo, subjectThree, subjectFour, subjectFive, subjectSix));

    getch();
}
