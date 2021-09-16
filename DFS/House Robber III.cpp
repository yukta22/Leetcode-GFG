//https://leetcode.com/problems/house-robber-iii/

///////////////////////////////////////////////////////////////////////////////////
// T.C. : O(2^N) (TLE)
// S.C. : O(1)

class Solution {
public:
    int rob(TreeNode* root) {
        if(root == NULL) return 0;
        
        int val = 0;
        if(root->left != NULL) val += rob(root->left->left) + rob(root->left->right);
        if(root->right != NULL) val += rob(root->right->left) + rob(root->right->right);
     
        return max(root->val + val , rob(root->left) + rob(root->right));
        
    }
};

