class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int result = 1;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            int n = q.size();
            int start = q.front().second;
            int end = q.back().second;
            
            result = max(result,end-start+1);
            
            for(int i = 0 ;i<n ;i++){
                pair<TreeNode*,int> f = q.front();
                int idx = f.second - start;
                q.pop();
                if(f.first -> left) q.push({f.first->left , 2*idx + 1});
                if(f.first -> right) q.push({f.first->right , 2*idx + 2});
            }
            
        }
        return result;
    }
};
