/*
    Given an integer array nums of length n, you want to create an array ans of length 2n where
    ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).
    Specifically, ans is the concatenation of two nums arrays.
    Return the array ans.

    Example 1:
    Input: nums = [1,2,1]
    Output: [1,2,1,1,2,1]
    Explanation: The array ans is formed as follows:
    - ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
    - ans = [1,2,1,1,2,1]

    Example 2:
    Input: nums = [1,3,2,1]
    Output: [1,3,2,1,1,3,2,1]
    Explanation: The array ans is formed as follows:
    - ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]
    - ans = [1,3,2,1,1,3,2,1]
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int nums[] = {1, 2, 1};
    int ans[3];
    int index = 0, length = 0;

    while (index < 3)
    {
        length++;
        index++;
    }

    printf("\nThe length of nums[%d] = %d\n\n", index, length);

    int indexSecond;

    for (indexSecond = length - 1; indexSecond >= 0; indexSecond--)
    {
        nums[index] = ans[indexSecond];
    }

    printf("nums[%d] = %d\n", index, nums);

    getch();

    // int nums2[10];
    // int i, j, length = 0;

    // for (i = 0; i < 3; i++)
    // {
    //     length++;
    // }

    // printf("Length of nums[%d] = %d\n", i, length);

    // for (j = length - 1; j >= 0; j--) // j = 2; j = 1; j = 0;
    // {
    //     // nums[length + j] = nums2[j];
    //     nums[length + j] = nums2[j];
    // }

    // printf("nums[] = %d\n\n", nums);
}
