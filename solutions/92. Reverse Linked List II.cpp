class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {       
    
        for(int i = 0 ; i < n - m ; i++){
            int d1 = m + i;
            int d2 = n - i;            
            if(d1 >= d2 )  return head;         
                     
            ListNode* curr1 = head;
            ListNode* curr2 = head;
                        
            while((d1 - 1 )> 0) {
                curr1 = curr1 -> next;
                d1--;
            }
            while((d2 - 1) > 0) {
                curr2 = curr2 -> next;
                d2--;
            }
             
            int temp = curr1->val;
            curr1->val=curr2->val;
            curr2->val = temp;
        } 
          return head;
    }
};
​
