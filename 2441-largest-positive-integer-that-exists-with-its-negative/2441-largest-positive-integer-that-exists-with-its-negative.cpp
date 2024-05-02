class Solution {
public:
    int findMaxK(vector<int>& nums) {
        
        set<int> st(nums.begin(), nums.end());
        int ans = -1;
        
        for(auto& ele : nums)
        {
            if(ele > 0)
            {
                if(st.count(-ele))
                    ans = max(ans, ele);
            }
        }
        
        return ans;
    }
};