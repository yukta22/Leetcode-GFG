class Solution {
public:
    int maxNumberOfBalloons(string text) {
    
//         map<char, int> M;
   
//         for(auto ch : text) M[ch]++;
            
//         return min({M['b'], M['a'], M['l']/2, M['o']/2, M['n']});
// t.c : o(n) s.c :o(n);    
​
            int b, a, l, o, n;
            b = a = l = o = n = 0;
            for (auto ch : text) {
                b += (ch == 'b');
                a += (ch == 'a');
                l += (ch == 'l');
                o += (ch == 'o');
                n += (ch == 'n');
            }
        
            return min({b, a, l/2, o/2, n});
        
    } 
};
