//https://leetcode.com/contest/weekly-contest-223/problems/swapping-nodes-in-a-linked-list/


class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        ListNode* temp = NULL;
        
        while(--k){
            ptr1 = ptr1->next;
        }
        
        temp = ptr1;
        ptr1 = ptr1->next;
        
        while(ptr1){
            ptr2 = ptr2->next;
            ptr1 = ptr1->next;
        }        
        swap(temp->val , ptr2->val);
        
        return head;
        
    }
};
