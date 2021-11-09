//https://leetcode.com/contest/weekly-contest-265/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/

class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans;
        vector<int> v;
        
        ListNode* front = head;
        ListNode* mid = head->next;
        ListNode* above = head->next->next;
        
        if(!head->next->next){  // there must be three node to obtain the ans
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        
        int count = 2;
        int check = 0;
        
        while(above){
            if((mid->val) > (front->val) && (mid->val) > (above->val)){  // for local maxima
                v.push_back(count);             //entering the critical point in the vector
                count++;
                check++;
            }
            
            else if((mid->val) < (front->val) && (mid->val) < (above->val)){  // for local minima
                v.push_back(count);            //entering the critical point in the vector
                count++;
                check++;
            }
            else   count++;
            
            front=front->next;
            mid=mid->next;
            above=above->next;

            
        }
        
        if(check<2){  //if there will be less than two critical point then return [-1,-1];
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        
        
        int small=INT_MAX; 
        
        for(int i=0;i<v.size()-1;i++)
        {
            if((abs(v[i]-v[i+1]))<small){
                small=abs(v[i]-v[i+1]); // storing the difference of two critical point to find the diiference of minimum
            }
        }
               
        
        ans.push_back(small);
        ans.push_back(v[v.size()-1]-v[0]);  // maximum diff will be the diff b/w 0th index and last index
        
        return ans;

    }
};
