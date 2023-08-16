class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        
        int i = 0, j = 0;
        
        int n = nums.size();
        
        unordered_map<int,int> mp;
        
        set<int> st;
        
        vector<int> ans;
        
        while(j < n)
        {
            ++mp[nums[j]];
            st.insert(nums[j]);
            
            if(j - i + 1 == k)
            {
                ans.push_back(*st.rbegin());
                
                --mp[nums[i]];
                
                if(mp[nums[i]] == 0)
                {
                    mp.erase(nums[i]);
                    st.erase(nums[i]);
                }
                
                ++i;
            }
            
            ++j;
        }
        
        return ans;
        
    }
};