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
    vector<vector<int>> ans;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL) return {};
        
        int level = 0;
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        vector<int> v;
        s1.push(root);
        while(!s1.empty() || !s2.empty()){
            
            if(level%2 == 0){
                while(!s1.empty()){
                    TreeNode* temp = s1.top();
                    s1.pop();
                    v.push_back(temp->val);                
​
                    if(temp->left)  s2.push(temp->left);
                    if(temp->right) s2.push(temp->right);
​
                }
                level++;
             }
            
            else if(level%2 != 0){
                while(!s2.empty()){
                    TreeNode* temp = s2.top(); 
                    s2.pop();
