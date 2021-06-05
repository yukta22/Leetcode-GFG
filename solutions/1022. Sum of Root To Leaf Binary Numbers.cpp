class Solution {
public:
    
    int helper(TreeNode*root,int sum){
        if(!root)return NULL;
        
        sum = (sum<<1) + root->val;
        
        if(root->left == NULL && root->right == NULL){
            return sum;
        }
        
        return helper(root->left , sum) + helper(root->right,sum);
        
    }
    
    int sumRootToLeaf(TreeNode* root) {
        return helper(root,0);
    }
};
