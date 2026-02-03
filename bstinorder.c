 void helper(struct TreeNode* root, int* arr, int* idx) {
    if (root == NULL)
        return;

    helper(root->left, arr, idx);

    arr[*idx] = root->val;
    (*idx)++;

    helper(root->right, arr, idx);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
   int* arr = (int*)malloc(1000 * sizeof(int)); // allocate array
    *returnSize = 0;

    helper(root, arr, returnSize);

    return arr;
}