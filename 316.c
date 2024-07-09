/*
    Objective
    The modulo operator, %, returns the remainder of a division. For example, 4 % 3 = 1 and
    12 % 10 = 2. The ordinary division operator, /, returns a truncated integer value when
    performed on integers. For example, 5 / 3 = 1. To get the last digit of a number in base
    10, use  as the modulo divisor.

    Task
    Given a five digit integer, print the sum of its digits.

    Input Format
    The input contains a single five digit number, n.

    Constraints
    10000 <= n <= 99999

    Output Format
    Print the sum of the digits of the five digit number.

    Sample Input 0
    10564

    Sample Output 0
    16
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int n;
    scanf("%d", &n);
    int sum = 0, remainder;

    if (10000 <= n <= 99999)
    {
        while (n > 0)
        {
            remainder = n % 10;
            sum += remainder;
            n /= 10;
        }
    }

    printf("The sum of digits = %d\n", sum);

    getch();
}
