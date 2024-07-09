/*
    Print a pattern of numbers from 1 to n as shown below. Each of the numbers is separated by
    a single space.
                                4 4 4 4 4 4 4
                                4 3 3 3 3 3 4
                                4 3 2 2 2 3 4
                                4 3 2 1 2 3 4
                                4 3 2 2 2 3 4
                                4 3 3 3 3 3 4
                                4 4 4 4 4 4 4

    Input Format
    The input will contain a single integer n.

    Constraints
    1 <= n <= 1000

    Sample Input 0
    2

    Sample Output 0
    2 2 2
    2 1 2
    2 2 2

    Sample Input 1
    5

    Sample Output 1
    5 5 5 5 5 5 5 5 5
    5 4 4 4 4 4 4 4 5
    5 4 3 3 3 3 3 4 5
    5 4 3 2 2 2 3 4 5
    5 4 3 2 1 2 3 4 5
    5 4 3 2 2 2 3 4 5
    5 4 3 3 3 3 3 4 5
    5 4 4 4 4 4 4 4 5
    5 5 5 5 5 5 5 5 5

    Sample Input 2
    7
    Sample Output 2
    7 7 7 7 7 7 7 7 7 7 7 7 7
    7 6 6 6 6 6 6 6 6 6 6 6 7
    7 6 5 5 5 5 5 5 5 5 5 6 7
    7 6 5 4 4 4 4 4 4 4 5 6 7
    7 6 5 4 3 3 3 3 3 4 5 6 7
    7 6 5 4 3 2 2 2 3 4 5 6 7
    7 6 5 4 3 2 1 2 3 4 5 6 7
    7 6 5 4 3 2 2 2 3 4 5 6 7
    7 6 5 4 3 3 3 3 3 4 5 6 7
    7 6 5 4 4 4 4 4 4 4 5 6 7
    7 6 5 5 5 5 5 5 5 5 5 6 7
    7 6 6 6 6 6 6 6 6 6 6 6 7
    7 7 7 7 7 7 7 7 7 7 7 7 7
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int row, col;
    int n;
    scanf("%d", &n);

    for (row = 0; row < 2 * n - 1; row++)
    {
        for (col = 0; col < 2 * n - 1; col++)
        {
            if (row == 0 || row == n - 1 || col == 0 || col == n - 1)
            {
                printf("%d ", n);
            }
            else
            {
                printf(" ");
            }
        }
    }

    getch();
}
