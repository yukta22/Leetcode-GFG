/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    vector<int> ans;
    map<TreeNode*,TreeNode*> parent;
    set<TreeNode*> visit;
    
    void findParent(TreeNode* root){
        if(!root) return;
        
        if(root->left) {
            parent[root->left] = root;
            findParent(root->left);
        }
        
        if(root->right) {
            parent[root->right] = root;
            findParent(root->right);
        }
        
    }
    
    void dfs( TreeNode* target, int k){
        
        if(visit.find(target) != visit.end() ) return ; 
        
        visit.insert(target);
        
        if(k == 0){
            ans.push_back(target->val);
            return;
        }
