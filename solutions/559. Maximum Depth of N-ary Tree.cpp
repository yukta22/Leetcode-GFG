class Solution {
public:
    int maxDepth(Node* root) {
        queue<Node*> q;
        int d = 0;
        
        if(!root) return NULL; 
        
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            
            for(int i = 0 ; i < n ; i++){
                Node* curr = q.front();
                q.pop();
                
                for(auto child : curr->children){
                    q.push(child);
                }
                
            }
            d++;
        }
        return d;
    }
};
