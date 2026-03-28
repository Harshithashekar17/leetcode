int missingNumber(int* nums, int numsSize) {
    int s1=0;
    int s2=0;
    for(int i=0;i<numsSize;i++){
        s1+=nums[i];
    }
    for(int j=0;j<=numsSize;j++){
        s2+=j;
    }
    return s2-s1;
}