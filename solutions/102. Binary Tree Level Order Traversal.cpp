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
    
    vector<vector<int>> v;
    
    void levelOrderHelper(TreeNode* root , int level , vector<vector<int>> &v){
        
        if(root == NULL) return ; 
        
        if(v.size() == level)
            v.push_back(vector<int>());
    
            v[level].push_back(root->val);
               
        levelOrderHelper(root->left , level+1 , v);
        levelOrderHelper(root->right , level+1 , v);
        
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
       
        levelOrderHelper(root , 0 , v);
        
        return v;
    }
    
  /*vector<vector<int>> ret;
  
    vector<vector<int>> levelOrder(TreeNode* root) {
      if(!root)return {};
