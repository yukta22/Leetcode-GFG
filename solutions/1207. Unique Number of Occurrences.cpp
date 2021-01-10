class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map;
        unordered_set<int> set;
        
        for(auto i : arr){
            map[i]++;
        }
        
        for(auto it = map.begin() ; it != map.end(); ++it){
            set.insert(it->second);
        }
        
        if(map.size() == set.size()) return true;
        
        return false;
        
    }
};
