bool isAnagram(char* s, char* t) {
    int n1=strlen(s);
    int n2=strlen(t);
    if(n1!=n2){
        return false;
    }
    int freq[256]={0};
    for(int i=0;i<n1;i++){
        freq[(unsigned)s[i]]++;
        freq[(unsigned)t[i]]--;
    }
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}