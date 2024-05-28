#pragma GCC optimize (-O3, -flto, -ffast-math, -march=native, -mtune=native)

int* findDisappearedNumbers(const int* nums, size_t numsSize, int* returnSize) {
    int included[numsSize + 1];
    for (size_t i = 0; i <= numsSize; ++i) {
        included[i] = 0;
    }
    for (size_t i = 0; i < numsSize; ++i) {
        included[nums[i]] = 1;
    }

    int* result = calloc(numsSize, sizeof(*nums));

    *returnSize = 0;
    for (size_t i = 1; i <= numsSize; ++i) {
        if (!included[i]) {
            result[*returnSize] = (int) i;
            (*returnSize)++;
        }
    }

    return result;
}

