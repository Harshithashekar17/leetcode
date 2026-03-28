int findNumbers(int* nums, int numsSize) {
    int s=0;
    for(int i=0;i<numsSize;i++){
        int count=0;
        int n=nums[i];
        while(n>0){
            count++;
            n/=10;
        }
        if(count%2==0){
            s++;
        }
    }
    return s;
}