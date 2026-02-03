void help(struct TreeNode* root,int*arr, int* inde){
    if(root==NULL){
        return;
    }
    help(root->left,arr,inde);
    help(root->right,arr,inde);
    arr[*inde]=root->val;
    (*inde)++;
 }
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int *arr=(int*)malloc(1000*sizeof(int));
    *returnSize=0;
    help(root,arr,returnSize);
    return arr;
}