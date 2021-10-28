//https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/submissions/
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0, 0}});
        while (!q.empty()) {
            auto f = q.front();
            q.pop();
            TreeNode* node = f.first;
            int x = f.second.first, y = f.second.second;
            nodes[x][y].insert(node -> val);
            if (node -> left) {
                q.push({node -> left, {x - 1, y + 1}});
            }
            if (node -> right) {
                q.push({node -> right, {x + 1, y + 1}});
            }
        }
        
        vector<vector<int>> ans;
        for (auto p : nodes) {
            vector<int> col;
            for (auto q : p.second) {
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};

   ////////////////////////////////////////////////////////////////  DFS  ////////////////////////////////////////////////////////////////////////////////
 
    map<int,map<int,set<int>>> mymap;

     void solve(TreeNode* curr,int col ,int row){
         if(!curr)
         	return;

         mymap[col][row].insert(curr->val);
         solve(curr->left,col-1,row+1);
         solve(curr->right,col+1,row+1);

     }


     vector<vector<int>> verticalTraversal(TreeNode* root) {
     
     solve(root,0,0);

     vector<vector<int>>ans;

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
