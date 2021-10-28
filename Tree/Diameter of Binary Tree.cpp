//https://leetcode.com/problems/diameter-of-binary-tree/

/////////////////////////////////////////////////////////////////////////////////////////
// T.C.: O(N^2)

class Solution {
public:
    int depth(TreeNode* root){
        if(!root) return 0;
        else return max(depth(root->left) , depth(root->right))+ 1; 
    }    
        
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        
        int longestPath = depth(root->left) + depth(root->right);
        
        return max(longestPath , max(diameterOfBinaryTree(root->left) ,diameterOfBinaryTree(root->right) ));
        
    }
};

/////////////////////////////////////////////////////////////////////////////////////////
// T.C.: O(N)

class Solution {
public:
    
    int height(TreeNode* root,int &diameter){
        if(!root) return 0;
        
        int lh = height(root->left,diameter);
        int rh = height(root->right,diameter);
        
        diameter = max(diameter,lh+rh);
        
        return 1 + max(lh,rh);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root,diameter);
        return diameter;
    }
};
