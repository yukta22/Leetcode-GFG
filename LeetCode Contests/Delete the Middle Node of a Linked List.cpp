//https://leetcode.com/contest/weekly-contest-270/problems/delete-the-middle-node-of-a-linked-list/

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head -> next == NULL) return NULL;
        
        ListNode* temp = head;
        int len = 0;
        
        while(temp != NULL){
            len++;
            temp=temp->next;
        }
        
        int mid = floor(len/2);
        
        temp = head;
        
        for(int i = 0 ; i < mid - 1 ; i++){
            temp=temp->next;
        }
        
        temp->next = temp->next->next;
        
        return head;
    }
};
