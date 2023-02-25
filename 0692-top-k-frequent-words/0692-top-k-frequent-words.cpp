class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        map<string,int> mp;
        vector<string> ans;
        for(auto itr : words)
            ++mp[itr];
        
        vector<pair<int,string>> vp;
        for(auto itr : mp)
        {
            vp.push_back({itr.second,itr.first});
        }
        
        sort(vp.begin(),vp.end(),[&](const auto &a , auto& b){
            if(a.first == b.first)
                return a.second < b.second;
            return a.first > b.first;
        });
        
        for(int i = 0; i<k; ++i)
            ans.push_back(vp[i].second);
        
        return ans;    
    }
};