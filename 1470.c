int* shuffle(int* nums, int numsSize, int n, int* returnSize){
     int i=0;
     int j=n;
     int *arr=(int*)malloc(sizeof(int)*numsSize);
     int k=0;
     while(i<n && j<numsSize){
        arr[k++]=nums[i++];
        arr[k++]=nums[j++];
     }
     *returnSize=k;
     return arr;
}