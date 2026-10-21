/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void inorder(struct TreeNode*root , struct TreeNode**v , int*i){
    if(root!=NULL){
        inorder(root->left,v,i);
        v[(*i)++]=root;
        inorder(root->right,v,i);
    }
    return;
}

struct TreeNode*built(struct TreeNode**v  , int l , int r){
    if(l>r) return NULL;
    int mid=l+(r-l)/2;
    struct TreeNode *root=v[mid];
    root->left=built(v,l,mid-1);
    root->right=built(v,mid+1,r);
    return root;
}

struct TreeNode* balanceBST(struct TreeNode* root) {
       struct TreeNode**v=malloc(100001*sizeof(struct TreeNode*));
       int i=0;
       inorder(root,v,&i);
       root=built(v,0,i-1);
       free(v);
       return root;       
}