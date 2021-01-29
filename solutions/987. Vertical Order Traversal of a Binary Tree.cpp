 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    //dfs method
    map<int,map<int,set<int>>> mymap;
    
    void solve(TreeNode* curr , int col , int row){
        if(!curr) return;
        
        mymap[col][row].insert(curr->val);
        solve(curr->left , col-1,row+1);
        solve(curr->right , col+1,row+1);
        
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        solve(root , 0 , 0);
        
        vector<vector<int>> ans;
        
        for(auto m1 : mymap){
            ans.push_back(vector<int>());
            
            for(auto m2 : m1.second){
            
                for(auto m3 : m2.second){
                    ans.back().push_back(m3);
                }
            }
            
        }
        return ans;
    }
};
​
//  //BFS-Method
// class Solution {
// public:
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         TreeNode *curr;
//         queue<pair<TreeNode*, int>> q;
//         q.push({root,0});
//         vector<vector<int>> ans;
//         map<int,vector<int>> mymap;
        
//         //BFS
//         while(!q.empty())
//         {
//             int size = q.size();            
//             map<int,set<int>> mapset;
            
//             while(size--)
//             {
//                 curr = q.front().first;
