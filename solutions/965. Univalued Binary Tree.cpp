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
    
    //o(n) & o(h)
    
    bool isUnivalTree(TreeNode* root) {
       
        bool left_val= (root->left == NULL || (root->left->val == root->val  && isUnivalTree(root->left))) ;
        
        bool right_val= (root->right == NULL || (root->right->val == root->val  && isUnivalTree(root->right))) ;
        
        return left_val && right_val;
    }
};
​
//         if(root == NULL) return true;
        
        
//         if(root->left != NULL)
//             if(root->left->val != root->val) return false;
        
//         if(root->right != NULL)
//             if(root->right->val != root->val) return false;
        
//      return isUnivalTree(root->left) && isUnivalTree(root->right); 
 
​
 
