size_t numberOfDigits(int num) {
    size_t res = 0;
    while (num) {
        num /= 10;
        res++;
    }
    return res;
}

int findNumbers(int* nums, int numsSize) {
    size_t total = 0;
    for (size_t i = 0; i < numsSize; ++i) {
        if (numberOfDigits(nums[i]) % 2 == 0) {
            total++;
        }
    }
    return total;
}
