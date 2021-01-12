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
bool helper(TreeNode* k1 ,TreeNode* k2){
        
        if( k1 == NULL && k2 == NULL)return true;
        if( k1 == NULL || k2 == NULL)return false;
        
        return (k1->val == k2->val)  && helper(k1->right,k2->left) && helper(k1->left ,k2->right);  
    }
 
    
    
    bool isSymmetric(TreeNode* root) {
         //if (!root) return true;
         return helper(root,root);
    }
};
           
