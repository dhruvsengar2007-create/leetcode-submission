/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void helper(struct TreeNode*root , int *res , int *i){
    if(root!=NULL){
        helper(root->left,res,i);
        res[(*i)++]=root->val;
        helper(root->right,res,i);
    }
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *res=malloc(101 * sizeof(int));
    int i=0;
    helper(root,res,&i);
    *returnSize=i;
    return res;
}