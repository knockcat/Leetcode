class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        unordered_map<int,int> mp;
        
        int ans = 0;
        
        for(auto itr : tasks)
            ++mp[itr];
        
        for(auto itr : mp)
        {
            if(itr.second == 1)
                return -1;
            else if(itr.second % 3 == 0)
                ans += itr.second/3;
            else
                ans += itr.second/3 + 1;
        }
        
        return ans;
    }
};