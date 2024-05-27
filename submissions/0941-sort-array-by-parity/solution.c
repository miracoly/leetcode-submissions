#pragma GCC optimize (-O3, -flto, -ffast-math, -march=native, -mtune=native)

int* sortArrayByParity(int* nums, size_t numsSize, int* returnSize) {
    if (!nums || !returnSize) return NULL;
    size_t k = numsSize - 1;
    for (size_t i = 0; i < numsSize; ++i) {
        if (i == k) break;
        if (nums[i] % 2 != 0) {
            const int tmp = nums[k];
            nums[k--] = nums[i];
            nums[i--] = tmp;
        }
    }
    *returnSize = numsSize;
    return nums;
}

