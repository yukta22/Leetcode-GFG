//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

class Solution {
public:    
    vector<vector<int>> ans;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<int> v;
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        int level = 0;
        s1.push(root);     
        while(!s1.empty() || !s2.empty()){
            
            if(level % 2 == 0){
                while(!s1.empty()){
                    TreeNode* temp = s1.top();
                    v.push_back(temp->val);
                    s1.pop();
                    
                    if(temp->left) s2.push(temp->left);
                    if(temp->right) s2.push(temp->right);   
                }
                level++;
            }
            
            else if(level % 2 != 0){
                 while(!s2.empty()){
                    TreeNode* temp = s2.top();
                    v.push_back(temp->val);
                    s2.pop();
                    if(temp->right) s1.push(temp->right);
                    if(temp->left) s1.push(temp->left);   
                }
                level++;
            }
            ans.push_back(v);
            v.clear();
            
        }
        return ans;
        
    }
};



////////////////////////////////////////////// Using Queue ////////////////////////////////////////////////////

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        
        if(root == NULL) return result;
        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;
        
        while(!q.empty()){
            int n = q.size();
            vector<int> v(n);
            
            for(int i = 0 ; i < n ;i++){
                TreeNode* node = q.front();
                q.pop();
                
                //find the postion of node value
                int index = leftToRight ? i : n - 1 - i; 
                v[index] = node->val;
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                
            }
            
            leftToRight = !leftToRight;
            result.push_back(v);
        }
        return result;
    }
};



