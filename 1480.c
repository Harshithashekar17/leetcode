int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *sum=(int*)malloc(sizeof(int)*numsSize);
    for(int i=0;i<numsSize;i++){
        if(i==0){
           sum[i]=nums[i];
        }
        else{
            sum[i]=sum[i-1]+nums[i];
        }
    }
    * returnSize=numsSize;
    return sum;
}