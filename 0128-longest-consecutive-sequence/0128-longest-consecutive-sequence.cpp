class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int> st(nums.begin(),nums.end());
        
        int ans = 0, n = nums.size();
        
        for(int i = 0; i < n; ++i)
        {
            if(!st.count(nums[i] - 1))
               {
                   int curr = 0;
                   int var = nums[i];
                   while(st.count(var))
                   {
                        ++var;
                       ++curr;
                   }
                   ans = max(ans,curr);
               }
        }
               
        return ans;
        
    }
};