/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:    
    
    int maxDepth(TreeNode* root) {
        if(!root) return NULL;
        int ld,rd;
        // if(root->left) 
            ld = maxDepth(root->left);
        // if(root->right) 
            rd = maxDepth(root->right);
        
        int maxi = max(ld , rd );
        
        return maxi+1;
        
    }
};
