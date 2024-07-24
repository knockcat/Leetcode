class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        
        map<char, char> mp;
        
        for(int i = 0; i < mapping.size(); ++i)
            mp[i+'0'] = mapping[i]+'0';
        
        vector<pair<int, int>> vp;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            string str = to_string(nums[i]);
            for(int i = 0; i < str.size(); ++i)
                str[i] = mp[str[i]];
            vp.push_back({stoi(str), i});
        }
        
        sort(vp.begin(), vp.end());
        
        vector<int> ans;
        
        for(auto&[f,e] : vp)
        {
            ans.push_back(nums[e]);
        }
        
        return ans;
        
    }
};