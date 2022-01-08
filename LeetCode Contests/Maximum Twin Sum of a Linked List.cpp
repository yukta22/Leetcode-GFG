
class Solution {
public:
    int pairSum(ListNode* head) {
        
        vector<int> ans;
        ListNode* temp = head;
        ans.push_back(head->val);
        int len = 0;
        while (temp != NULL){ 
            len++; 
            ans.push_back(temp->val);
            temp = temp->next; 
            
        } 
        
        int sum = 0;
        int maxi =0;
        int n = len ;
        for(int i = 0 ; i < n ; i++){
            sum = (ans[i] + ans[n-i+1]);
            maxi = max(maxi,sum);
        }
        
        return maxi;

    }
};
