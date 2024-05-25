#pragma GCC optimize (-O3, -flto, -ffast-math, -march=native, -mtune=native)
#include <stddef.h>

int* replaceElements(int* restrict arr, int arrSize, int* restrict returnSize) {
    if (!arr || arrSize < 1) return NULL;

    int current_max = -1;
    for (size_t i = arrSize; i > 0; --i) {
        const size_t j = i - 1;
        const int tmp = arr[j];
        arr[j] = current_max;
        current_max = tmp > current_max ? tmp : current_max;
    }
    *returnSize = arrSize;
    return arr;
}

