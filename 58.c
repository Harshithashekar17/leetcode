int lengthOfLastWord(char* s) {
    int n = strlen(s);
    int count = 0;
    int l = 0;

    // start from end instead of counting all spaces
    l = n - 1;

    // skip trailing spaces
    while (l >= 0 && s[l] == ' ') {
        l--;
    }

    // count last word characters
    while (l >= 0 && s[l] != ' ') {
        count++;
        l--;
    }

    return count;
}