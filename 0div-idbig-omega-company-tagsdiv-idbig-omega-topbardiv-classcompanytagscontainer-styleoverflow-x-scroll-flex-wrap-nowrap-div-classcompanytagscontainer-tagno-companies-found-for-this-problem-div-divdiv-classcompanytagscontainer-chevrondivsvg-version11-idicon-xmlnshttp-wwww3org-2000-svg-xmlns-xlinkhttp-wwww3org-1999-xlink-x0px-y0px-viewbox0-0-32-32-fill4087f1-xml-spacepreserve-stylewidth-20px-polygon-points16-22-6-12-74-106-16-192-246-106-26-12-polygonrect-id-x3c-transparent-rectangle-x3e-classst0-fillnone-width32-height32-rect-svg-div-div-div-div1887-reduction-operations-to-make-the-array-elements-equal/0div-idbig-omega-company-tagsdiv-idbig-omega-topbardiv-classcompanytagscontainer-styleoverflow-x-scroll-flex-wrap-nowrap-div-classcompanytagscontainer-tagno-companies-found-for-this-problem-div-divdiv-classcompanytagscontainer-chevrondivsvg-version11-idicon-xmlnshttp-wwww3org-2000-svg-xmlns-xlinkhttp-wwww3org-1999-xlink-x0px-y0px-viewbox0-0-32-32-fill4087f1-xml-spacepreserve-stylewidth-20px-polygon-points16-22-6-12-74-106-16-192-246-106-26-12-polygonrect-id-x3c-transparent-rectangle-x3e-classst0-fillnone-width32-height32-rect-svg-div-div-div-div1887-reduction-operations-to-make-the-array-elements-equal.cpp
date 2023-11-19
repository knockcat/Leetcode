class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        
        int n = nums.size();
        
        unordered_map<int,int> mp;
        
        for(auto& itr : nums)
        {
            ++mp[itr];
        }
        
        vector<pair<int,int>> vp;
        
        copy(mp.begin(),mp.end(), back_inserter(vp));
        
        sort(vp.rbegin(),vp.rend());
        
        int ans = 0;
        
        for(int i = 0; i < vp.size()-1; ++i)
        {
            ans += vp[i].second;
            vp[i+1].second += vp[i].second;
        }
        
        return ans;
    }
};