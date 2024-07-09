/*
    A perfect number is a positive integer that is equal to the sum of its positive divisors,
    excluding the number itself. A divisor of an integer x is an integer that can divide x
    evenly.
    Given an integer n, return true if n is a perfect number, otherwise return false.

    Example 1:
    Input: num = 28
    Output: true
    Explanation: 28 = 1 + 2 + 4 + 7 + 14
    1, 2, 4, 7, and 14 are all divisors of 28.

    Example 2:
    Input: num = 7
    Output: false
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int perfectNumber;
    int perfectIndex[100];
    int index, sum = 0, n;

    printf("Enter a number for checking it's perfect or not : ");
    scanf("%d", &perfectNumber);
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter elements for array : \n");
    for (index = 1; index < n; index++)
    {
        scanf("%d", &perfectIndex[index]);
    }
    for (index = 1; index <= n; index++)
    {
        printf("%d ", perfectIndex[index]);
    }

    if (perfectNumber % perfectIndex[index] == 0)
    {
        sum = sum + perfectIndex[index];
    }

    if (sum == perfectNumber)
    {
        printf("\n%d is a perfect number.\n", perfectNumber);
    }
    else
    {
        printf("\n%d is not a perfect number.\n", perfectNumber);
    }

    getch();
}
