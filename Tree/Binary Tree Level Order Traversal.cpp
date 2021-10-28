// Given the root of a binary tree, return the level order traversal of its nodes
// ' values. (i.e., from left to right, level by level).



// Input: root = [3,9,20,null,null,15,7]
// Output: [[3],[9,20],[15,7]]
// Input: root = [1]
// Output: [[1]]
// Input: root = []
// Output: []


class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> v;
        
        if(root == NULL) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){            
            int n = q.size();
            
            for(int i = 0 ; i < n ;i++){
                TreeNode* f = q.front();
                q.pop();
                
                v.push_back(f->val);
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
            
            ans.push_back(v);
            v.clear();
            
        }
        return ans;
        
    }
};

