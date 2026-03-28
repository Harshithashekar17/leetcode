int* buildArray(int* nums, int numsSize, int* returnSize) {
    int *ans=(int*)malloc(sizeof(int)*numsSize);
    int k=0;
    for(int i=0;i<numsSize;i++){
        ans[k]=nums[nums[i]];
        k++;
    }
    * returnSize=numsSize;
    return ans;
}