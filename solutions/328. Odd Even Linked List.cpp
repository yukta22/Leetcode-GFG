class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head)return NULL;
        ListNode* odd = new ListNode(-1);
        ListNode* even = new ListNode(-1);
​
        ListNode* o = odd;
        ListNode* e = even;
        int i = 1;
​
        while(head != NULL){            
            if(i%2 != 0){
                o -> next = head;
                o = head;
            }
            else{
                e -> next = head;
                e = head;
            }            
            head = head->next;
            i++;
        }
        e->next = NULL;
        o->next = even ->next;        
        return odd->next;
    }
};
