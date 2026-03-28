void merge(int arr[], int left, int mid, int right) {
    int i = left, j = mid + 1, k = 0;
    int temp[right - left + 1];  // temporary array

    // compare and merge
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    // copy remaining elements
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // copy back to original array
    for (i = left, k = 0; i <= right; i++, k++) {
        arr[i] = temp[k];
    }
}

// Merge sort function
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);       // left half
        mergeSort(arr, mid + 1, right);  // right half

        merge(arr, left, mid, right);    // merge
    }
}

bool containsDuplicate(int* nums, int numsSize) {
    mergeSort(nums,0,numsSize-1);
    for(int i=0;i<numsSize-1;i++){
       if(nums[i]==nums[i+1]){
         return true;
       }
    }
    return false;

}