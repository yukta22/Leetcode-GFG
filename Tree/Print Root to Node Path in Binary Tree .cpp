//https://www.interviewbit.com/problems/path-to-given-node/

bool getPath(TreeNode* root, vector<int>& ans, int x){
    if(!root) return false;

    ans.push_back(root->val);

    if(root->val == x){
        return true;
    }

    if( getPath(root->left,ans,x) || getPath(root->right,ans,x) ){
        return true;
    }

    ans.pop_back();
    return false;

}

vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> ans;
    if(A == NULL) return ans;

    getPath(A,ans,B);
    return ans;
}
