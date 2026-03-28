int sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            return 0;
        }
    }
    return 1;
}
bool check(int* nums, int numsSize) {
    int k=0;
    int b[numsSize];
    
      do{
        for(int i=0;i<numsSize;i++){
            b[i]=nums[(k+i)%numsSize];
        }
        if(sort(b,numsSize)){
            return true;
        }
        else{
            k++;
        }
      }while(k<numsSize);

    
    return false;
}