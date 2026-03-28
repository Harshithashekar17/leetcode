int strStr(char* haystack, char* needle) {
    int n1 = strlen(haystack);
    int n2 = strlen(needle);

    if (n2 == 0) return 0;

    for (int i = 0; i <= n1 - n2; i++) {
        int j;
        for (j = 0; j < n2; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (j == n2) {
            return i;
        }
    }

    return -1;
}