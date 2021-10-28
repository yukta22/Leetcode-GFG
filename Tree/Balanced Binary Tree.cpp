//https://leetcode.com/problems/balanced-binary-tree/

class Solution {
public:
    bool ans=true;
    
    int height(TreeNode*root){
        if(!root)
            return 0;
        int l=height(root->left);
        int r=height(root->right);
            
        if(abs(l-r) > 1){
            ans = false;
        }

        return max(l,r)+1;
     }
    
     bool isBalanced(TreeNode* root) {
         
            height(root);
            return ans;
        }

};



