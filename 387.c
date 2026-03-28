int firstUniqChar(char* s) {
    int n=strlen(s);
    int freq[256]={0};
    for(int i=0;i<n;i++){
        freq[(unsigned)s[i]]++;
    }
    for(int i=0;i<n;i++){
        if(freq[s[i]]==1){
            return i;
        }
    }
    return -1;
}