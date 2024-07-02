class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        map<int, int> mp, mp2;
        
        vector<int> ans;
        
        for(auto& ele : nums1)
        {
            ++mp[ele];
        }
        
        for(auto& ele : nums2)
        {
            ++mp2[ele];
        }
        
        for(auto&[f,e] : mp)
        {
            if(mp2.find(f) != mp2.end())
            {
                for(int i = 0; i < min(e, mp2[f]); ++i)
                    ans.push_back(f);
            }
        }
        
        return ans;
    }
};