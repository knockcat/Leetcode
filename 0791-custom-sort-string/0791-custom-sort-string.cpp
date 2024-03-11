class Solution {
public:
    string customSortString(string order, string s) {
        
        map<char, int> mp;
 
        for(int i = 0; i < order.size(); ++i)
        {
            if(mp.find(order[i]) == mp.end())
                mp[order[i]] = i;
        }
        
        sort(s.begin(), s.end(),[&](const auto& a, const auto& b){
            return mp[a] < mp[b];
        });
        
        return s;
        
    }
};