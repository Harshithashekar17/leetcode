int n(int num){
    int rem;
    if(num%10==0){
        return false; 
    }
    int temp=num;
    while(temp!=0){
        rem=temp%10;
        if(rem==0){
            return false;
        }
        else{
          if((num%rem)!=0){
            return false;
          }
          temp/=10;
        }
    }
    return true;
}
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int k=0;
    * returnSize=0;
    int list[10000];
    for(int i=left;i<=right;i++){
        if(n(i)){
            list[k]=i;
            k++;
            (* returnSize)++;
        }
    }
    int *res=(int*)malloc(sizeof(int)*(* returnSize));
    for(int i=0;i<*returnSize;i++){
        res[i]=list[i];
    }
    return res;
}