class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* newroot = new TreeNode(val);
            newroot -> left = root;
            return newroot;
        }        
        queue<TreeNode*> q;
        int d =1;
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            
            for(int i = 0 ; i < n ; i++){
                TreeNode* top = q.front();
                q.pop();
                
                if(d == depth-1){
                    TreeNode* leftNode = new TreeNode(val);
                    TreeNode* rightNode = new TreeNode(val);
                    
                    if(top->left != NULL){
                        leftNode->left = top->left;
                    }
                    if(top->right != NULL){
                        rightNode->right = top->right;
                    }
                    
                    top->left = leftNode;
                    top->right = rightNode;
                    continue;
                }   
                if(top->left != NULL){
                    q.push(top->left);
                }
                if(top->right != NULL){
                    q.push(top->right);
                }
               
            }
             d++;
        }
