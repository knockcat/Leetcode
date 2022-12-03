class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        
        for(auto itr : s)
            ++mp[itr];
        
        priority_queue<pair<int,char>> pq;
        for(auto itr : mp)
            pq.push({itr.second,itr.first});
        
        string ans;
        
        while(!pq.empty())
        {
            ans += string(pq.top().first,pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};