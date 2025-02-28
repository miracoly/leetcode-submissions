#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int* ans = malloc(sizeof *nums * numsSize * 2);
    *returnSize = 2 * numsSize;
    for (size_t i = 0; i < numsSize; i++) {
        ans[i] = nums[i];
    }
    for (size_t i = numsSize; i < *returnSize; i++) {
        ans[i] = nums[i - numsSize];
    }
    return ans;
}
