/*
    Given a square matrix, calculate the absolute difference between the sums of its diagonals.

    For example, the square matrix arr is shown below:

    1 2 3
    4 5 6
    9 8 9
    The left-to-right diagonal = 1 + 5 + 9 = 15. The right to left diagonal = 3 + 5 + 9.
    Their absolute difference is |15 - 17| = 2.

    Function description

    Complete the diagonalDifference function in the editor below.

    diagonalDifference takes the following parameter:

    int arr[n][m]: an array of integers
    Return

    int: the absolute diagonal difference
    Input Format

    The first line contains a single integer, n, the number of rows and columns in the square
    matrix arr.
    Each of the next n lines describes a row, arr[i], and consists of n space-separated
    integers arr[i][j].

    Constraints
    -100 <= arr[i][j] <= 100

    Output Format

    Return the absolute difference between the sums of the matrix's two diagonals as a single integer.

    Sample Input

    3
    11 2 4
    4 5 6
    10 8 -12
    Sample Output

    15
    Explanation

    The primary diagonal is:

    11
    5
        -12
    Sum across the primary diagonal: 11 + 5 - 12 = 4

    The secondary diagonal is:

        4
    5
    10
    Sum across the secondary diagonal: 4 + 5 + 10 = 19
    Difference: |4 - 19| = 15

    Note: |x| is the absolute value of x

    Language
    C
    More
    21222324252627282930313233343536373839
                }
            }
        }

        printf("%d", (sumLeftDig - sumRightDig));

        return 0;
    }

    Line: 35 Col: 46

    Test against custom input
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int arr[100][100];
    int n, m, i, j, sumLeftDig = 0, sumRightDig = 0;
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i == j)
            {
                // [0][2] + [1][1] + [2][0]
                sumLeftDig += arr[i][j];
            }
            if ((i + j) == (n - 1))
            {
                sumRightDig += arr[i][j];
            }
        }
    }

    // printf("%d\n", sumLeftDig);
    // printf("%d\n", sumRightDig);

    printf("%d\n", (sumRightDig - sumLeftDig));

    return 0;
}
