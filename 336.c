/*
    Write a C program to create an array and call the function with different arguments and
    store the results in the array.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

// Declaration a function
int calculateSum(int x, int y)
{
    return x + y;
}

int main()
{
    int resultArr[6];

    int numberOne, numberTwo, numberThree, numberFour, numberFive, numberSix, numberSeven, numberEight, numberNine, numberTen, numberEleven, numberTwelve;
    printf("Enter the numbers : ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d", &numberOne, &numberTwo, &numberThree, &numberFour, &numberFive, &numberSix, &numberSeven, &numberEight, &numberNine, &numberTen, &numberEleven, &numberTwelve);

    // Call the function with different arguments and store the results in the array
    resultArr[0] = calculateSum(numberOne, numberTwo);
    resultArr[1] = calculateSum(numberThree, numberFour);
    resultArr[2] = calculateSum(numberFive, numberSix);
    resultArr[3] = calculateSum(numberSeven, numberEight);
    resultArr[4] = calculateSum(numberNine, numberTen);
    resultArr[5] = calculateSum(numberEleven, numberTwelve);

    for (int index = 0; index < 6; index++)
    {
        printf("Result%d is = %d\n", index + 1, resultArr[index]);
    }

    getch();
}
