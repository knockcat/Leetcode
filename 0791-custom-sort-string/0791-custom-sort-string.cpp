class Solution {
public:
    string customSortString(string order, string s) {
        
        map<char, int> mp;
        
        int id = 0;
        
        for(int i = 0; i < order.size(); ++i)
        {
            if(mp.find(order[i]) == mp.end())
                mp[order[i]] = id++;
        }
        
        vector<pair<char, int>> vp;
        
        for(auto&ch : s)
            vp.push_back({mp[ch], ch});
        
        sort(vp.begin(), vp.end());
        
        string ans;
        
        for(auto& ch : vp)
            ans += ch.second;
        
        return ans;
        
    }
};