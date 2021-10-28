//https://leetcode.com/problems/binary-tree-postorder-traversal/

/////////////////////////////////////////////////  recursive  /////////////////////////////////////////////////

class Solution {
public:
    
    void postorder(TreeNode* root , vector<int> &nodes){
        
        if(!root) return;
        
        postorder(root -> left, nodes);
        postorder(root -> right, nodes);
        nodes.push_back(root -> val);
        
    }
    
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> nodes;
        postorder(root, nodes);
        return nodes;
    }
};

/////////////////////////////////////////////////  Iterative  /////////////////////////////////////////////////

///////////////////////////// using 2 stack /////////////////////////////
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        
        if(root == NULL) return ans;
          
        stack<TreeNode*> st1,st2;
        
        st1.push(root);
        
        while(!st1.empty()){
            root = st1.top();
            st1.pop();
            
            st2.push(root);
            
            if(root->left) st1.push(root->left);
            if(root->right) st1.push(root->right);
            
        }
        
        while(!st2.empty()){
            ans.push_back(st2.top() -> val);
            st2.pop();
        }
        
        return ans;
        
    }
};

///////////////////////////// using 1 stack /////////////////////////////

