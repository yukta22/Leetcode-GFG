//Morris traversal
//https://leetcode.com/problems/flatten-binary-tree-to-linked-list/discuss/1207642/JS-Python-Java-C%2B%2B-or-Simple-O(1)-Space-and-Recursive-Solutions-w-Explanation
class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* curr = root;
        while(curr){
            if(curr->left){
                TreeNode* runner = curr->left;
                while(runner->right){
                    runner = runner->right;
                }
                runner->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr = curr->right;
        }
        
    }
};
