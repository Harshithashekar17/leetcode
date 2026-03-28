int* plusOne(int* digits, int digitsSize, int* returnSize) {

    int carry = 1;   // because we are adding 1
    int i;

    // Step 1: add from last digit (your style: loop + update)
    for (i = digitsSize - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;

        if (carry == 0)
            break;
    }

    // Step 2: if no extra carry, return original array
    if (carry == 0) {
        *returnSize = digitsSize;
        return digits;
    }

    // Step 3: if carry still exists, allocate new array
    *returnSize = digitsSize + 1;
    int* res = (int*)malloc(sizeof(int) * (*returnSize));

    res[0] = 1;
    for (i = 1; i < *returnSize; i++) {
        res[i] = 0;
    }

    return res;
}