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
    
    int getDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int ld = getDepth(root ->left);
        int rd = getDepth(root ->right);
        
        return 1 + max(ld , rd);
    }
    
    
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        if(!root) return {};
        
        int left = getDepth(root ->left);
        int right = getDepth(root ->right);
        
        if(left == right) return root;
        
        if(left > right) return subtreeWithAllDeepest(root->left);
        else return subtreeWithAllDeepest(root->right);
     
    }
};
​
