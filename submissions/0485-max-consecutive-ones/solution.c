int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max = 0;
    int current = 0;
    for (size_t i = 0; i < numsSize; ++i) {
        if (nums[i] == 1) {
            current++;
        } else {
            if (current > max) {
                max = current;
            }
            current = 0;
        }
    }
    return max > current ? max : current;
}
