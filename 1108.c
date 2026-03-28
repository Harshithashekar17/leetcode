char * defangIPaddr(char * address){
    int dots = 0;
    int len = strlen(address);

    // count dots
    for(int i = 0; i < len; i++){
        if(address[i] == '.')
            dots++;
    }

    // allocate memory
    char *res = (char*)malloc(len + 2 * dots + 1);

    int k = 0;

    for(int i = 0; i < len; i++){
        if(address[i] == '.'){
            res[k++] = '[';
            res[k++] = '.';
            res[k++] = ']';
        } else {
            res[k++] = address[i];
        }
    }

    res[k] = '\0';
    return res;
}