int maxSubArray(int* nums, int numsSize) {
    int current=nums[0];
    int max=nums[0];
    for(int i=1;i<numsSize;i++){
        if(current+nums[i]>nums[i]){
            current=current+nums[i];
        }
        else{
            current=nums[i];
        }
        if(current>max){
            max=current;
        }
    }
    return max;
}