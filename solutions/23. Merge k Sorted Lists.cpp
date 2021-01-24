/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    struct compare
    {
        bool operator()(ListNode* &a,ListNode* &b ){
            return a->val>b->val;
        }
    };
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode* ,vector<ListNode*>, compare > pq;
        ListNode* head = NULL;
        ListNode* temp;
        
        for(int i = 0 ; i< lists.size();i++){
            if(lists[i] != NULL)
                pq.push(lists[i]);            
        }
        
        while(pq.empty() == false){
            ListNode* node = pq.top();
            pq.pop();
            if(node->next != NULL){
                pq.push(node->next);
            }
            if(head == NULL){
                head = node;
                temp = node;
            }
            else{
                temp->next = node;
                temp = node;
            }
        }
        
        return head;
        
    }   
};      
