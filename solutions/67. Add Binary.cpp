class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1, j = b.size()-1;
        int carry = 0;
        string ans = "";
        while (i >= 0 || j >= 0 || carry!=0) {
            if (i >= 0) {
                carry += a[i]=='0'?0:1;
                i--;
            }
            if (j >= 0) {
                carry += b[j]=='0'?0:1;
                j--;
            }
            cout<<carry<<" ";
            ans = ((carry%2)==0?"0":"1") + ans;
            carry /= 2;
        }
        return ans;
​
    }
};
