int reapt(int m,int *arr,int * returnSize){
    for(int k=0;k<* returnSize;k++){
        if(m==arr[k]){
            return 0;
        }
    }
    return 1;
}
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int n=(nums1Size>nums2Size)?nums1Size:nums2Size;
    int * arr=(int*)malloc(sizeof(int)*n);
    * returnSize=0; 
    for(int i=0;i<nums1Size;i++){
         for(int j=0;j<nums2Size;j++){
            if(nums1[i]==nums2[j]){
                if(reapt(nums1[i],arr,returnSize)){
                arr[* returnSize]=nums1[i];
                (* returnSize)++;
                break;
                }
            }
         }
    }
    return arr;
}