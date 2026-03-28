char** fizzBuzz(int n, int* returnSize) {
    char **res=(char**)malloc(sizeof(char*)*n);
    int k=0;
    for(int i=1;i<=n;i++){
        if((i%3==0) && (i%5==0)){
            res[k]=(char*)malloc(strlen("FizzBuzz")+1);
            strcpy(res[k],"FizzBuzz");
            k++;
        }
        else if(i%3==0){
            res[k]=(char*)malloc(strlen("Fizz")+1);
            strcpy(res[k],"Fizz");
            k++;
        }
        else if(i%5==0){
            res[k]=(char*)malloc(strlen("Buzz")+1);
            strcpy(res[k],"Buzz");
            k++;
        }
        else{
            char buffer[12];
            sprintf(buffer,"%d",i);
            res[k]=(char*)malloc(strlen(buffer)+1);
            strcpy(res[k],buffer);
            k++;
        }
    }
    * returnSize=n;
    return res;
}