static void insertZero(size_t i, int* arr, int arrSize) {
    if (!arr || !arrSize || (int) i >= arrSize) return;
    if (arrSize == 1) {
        arr[0] = 0;
        return;
    }

    for (int j = arrSize - 2; j >= (int) i; --j) {
        arr[j + 1] = arr[j];
    }
    arr[i] = 0;
}

void duplicateZeros(int* arr, int arrSize) {
    for (int i = 0; i < arrSize; ++i) {
        if (arr[i] == 0) {
            insertZero(i, arr, arrSize);
            i++;
        }
    }
}
