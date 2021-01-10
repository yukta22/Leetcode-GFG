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
    int count = 0;
    void helper(TreeNode* root, int max){
        if(!root) return;
        
        if(root->val >= max){
            count++;
            max = root->val; 
        }
         helper(root->left , max);
         helper(root->right , max);
    }
    
    int goodNodes(TreeNode* root) {
        int max = INT_MIN;
        helper(root , max);
        return count;
    }
};
​
// int goodNodes(TreeNode* root, int val = INT_MIN) {
//     return root == nullptr ? 0 : (val <= root->val) 
//                                          + goodNodes(root->left, max(root->val, val))
//                                         + goodNodes(root->right, max(root->val, val));
// }
​
​
​
​
