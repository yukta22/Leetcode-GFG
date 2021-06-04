class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> v;
        queue<TreeNode*> q;
        
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            double sum = 0;
            
            for(int i = 0 ; i < n ; i++){
                TreeNode* f = q.front();
                q.pop();
                
                if(f->left != NULL) q.push(f->left);
                if(f->right != NULL) q.push(f->right);
                sum += f->val;
            }
            v.push_back(((double)sum / n));
        }
        return v;
    }
};
