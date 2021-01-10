/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
​
class Solution {
    
    Node* flatten_rec(Node* head) {
        
        Node* curr = head;
        Node* ans = head;
        
        while(curr){
            Node* child = curr->child;
            Node* next = curr->next;
            
            if(child){
                Node * tail =flatten_rec(child);
                tail -> next = next;
                if(next) next->prev=tail;
                curr->next = child;
                child->prev = curr;
                curr->child = NULL;
                curr=ans;
               
            }
             else
                 curr = next;
            
            if(curr) ans = curr;
            
        }
        return ans;
    }
    
