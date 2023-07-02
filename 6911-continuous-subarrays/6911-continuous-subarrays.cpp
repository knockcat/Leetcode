class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        
        int n = nums.size();
        
        long long int ans = 0, j = 0;
        
        multiset<int> st;
        
        for(int i = 0; i < n; ++i)
        {
            st.insert(nums[i]);
            
            while(*st.rbegin() - *st.begin() > 2)
            {
                auto it = st.find(nums[j]);
                st.erase(it);
                ++j;
            }
            
            ans += (i - j + 1);
        }
        
        return ans;
        
    }
};