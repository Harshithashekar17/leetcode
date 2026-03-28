int searchInsert(int* nums, int numsSize, int target) {
    int l=0;
    int h=numsSize-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]>target){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return l;
}