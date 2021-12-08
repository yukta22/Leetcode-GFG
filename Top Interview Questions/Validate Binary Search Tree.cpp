class Solution {
public:
    vector<int> ans;
    void inorder(TreeNode* root){
       if (!root)  return;

        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
    
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        inorder(root);
        
        for(int i = 1 ; i < ans.size() ; i++){
            if(ans[i] <= ans[i-1]){
                return false;
            }
        }
       
        return true;
    }
};

//////////////////////////////////////// 2nd  method for reduse S.C /////////////////////////////////
class Solution {
public:
    bool helper(TreeNode* root ,int *lower , int *upper){
        if (!root)  return true;
        
        if(upper && root->val >= *upper){
            return false;
        }
        
        if(lower && root->val <= *lower){
            return false;
        }
        return helper(root->left,lower,&(root->val)) && 
                helper(root->right,&(root->val),upper);
    }
    
    bool isValidBST(TreeNode* root) {
       return helper(root,NULL,NULL);        
    }
};

