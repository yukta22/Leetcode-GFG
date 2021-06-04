class Solution {
public:    
    void dfs(TreeNode* root, unordered_map<int,int>& mpp ){
        if(!root) return;
        mpp[root->val]++;
        dfs(root->left,mpp);
        dfs(root->right,mpp);   
    }    
    vector<int> findMode(TreeNode* root) {
        if(!root) return {};
        unordered_map<int,int> mpp;
        dfs(root,mpp);
        int maxi = 0;
        vector<int> ans;
        
        for(auto i : mpp){
            if(i.second > maxi){
                ans.clear();
                maxi=i.second;
            }
            if(i.second >= maxi){
                ans.push_back(i.first);
                
            }
        }
        return ans;
    }
};
