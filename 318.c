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
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int row, col;
    int x;

    for (row = 1; row <= 2 * n - 1; row++)
    {
        for (col = 1; col <= 2 * n - 1; col++)
        {
            for (x = 1; x <= 2 * n - 1; x++)
            {
                if ((row == x || row == 2 * n - x) || (col == x || col == 2 * n - x))
                {
                    printf("%d ", n + 1 - x);
                    break;
                }
            }
        }
        printf("\n");
    }

    return 0;
}