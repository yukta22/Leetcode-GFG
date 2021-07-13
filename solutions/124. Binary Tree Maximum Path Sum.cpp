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
    
    int helper(TreeNode* root, int &sum){
        if(root==NULL)
            return 0;
        
        int l=max(0,helper(root->left,sum));
        int r=max(0,helper(root->right,sum));
       
        int temp = max(max(l,r)+root->val , root->val);
        int ans = max(temp , l+r+root->val);
        
        sum=max(sum, ans);
​
        return temp;
    }
​
    
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        helper(root,sum);
        return sum;
​
    }
};
