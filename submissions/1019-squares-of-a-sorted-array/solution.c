int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    size_t l = 0;
    size_t r = numsSize - 1;
    int* res = calloc(numsSize, sizeof(int));
    *returnSize = numsSize;

    for (size_t i = numsSize; i > 0; --i) {
        const int leftSquare = nums[l] * nums[l];
        const int rightSquare = nums[r] * nums[r];

        if (leftSquare > rightSquare) {
            res[i - 1] = leftSquare;
            l++;
        } else {
            res[i - 1] = rightSquare;
            r--;
        }
    }

    return res;
}
