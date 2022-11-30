class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> mp;
        unordered_set<int> s;
        for(auto itr : arr)
            ++mp[itr];
        
        for(auto itr : mp)
            s.insert(itr.second);
        
        return (mp.size() == s.size());
    }
};