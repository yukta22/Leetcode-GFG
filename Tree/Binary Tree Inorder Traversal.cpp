//https://leetcode.com/problems/binary-tree-inorder-traversal/


/////////////////////////////////////////////////  recursive  /////////////////////////////////////////////////

class Solution {
public:
    void inorder(TreeNode* root, vector<int>& nodes) {
        if (!root) {
            return;
        }
        inorder(root -> left, nodes);
        nodes.push_back(root -> val);
        inorder(root -> right, nodes);
    }
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nodes;
        inorder(root, nodes);
        return nodes;
        
    }
};


/////////////////////////////////////////////////  Iterative  /////////////////////////////////////////////////

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        
        TreeNode* curr = root;
        
        while(true){
            
            if(curr != NULL){
                st.push(curr);
                curr = curr->left;
            }
            else{
                
                if(st.empty()) break;
                curr = st.top();
                st.pop();
                ans.push_back(curr->val);
                
                curr = curr->right;
            }
            
        }
        return ans;
    }
};
