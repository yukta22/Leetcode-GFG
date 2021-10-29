//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(!root) return NULL;
        
        if(root->val == p->val || root->val == q->val){
            return root;
        }
        
        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);
        
        if(left == NULL)  {
            return right;
        }
        if(right == NULL) { 
            return left;
        }
        else{
            return root;
        }
        
    }
};
