//https://leetcode.com/problems/binary-tree-right-side-view/

class Solution {
public:
    
    void solve(TreeNode* root, int level, vector<int>& ans){
        if(root == NULL) return;
        
        if(ans.size() == level){
            ans.push_back(root->val);
        }
        
        solve(root->right , level+1,ans);
        solve(root->left , level+1,ans);
        
        
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        solve(root,0,ans);
        return ans;
    }
};


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    
    void rightSideViewHelper(TreeNode* root , int level , int *max , vector<int> &v){
        if(root == NULL) return;
        
        if(*max < level){
            v.push_back(root->val);
            *max = level;
        }
        
        rightSideViewHelper(root->right,level+1,max,v);
        rightSideViewHelper(root->left,level+1,max,v);
        
    }
    
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        int max=0;
        rightSideViewHelper(root,1,&max,v);
        return v;
    }
};
