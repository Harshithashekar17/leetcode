void help(struct TreeNode* root, int*arr,int *inde){
    if(root==NULL){
       return ;
    }
    arr[*inde]=root->val;
    (*inde)++;
    help(root->left,arr,inde);
    help(root->right,arr,inde);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int *arr=(int*)malloc(1000*sizeof(int));
    *returnSize=0;
    help(root,arr,returnSize);
    return arr;
}