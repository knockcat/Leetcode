class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> prefMin(n);
        
        prefMin[0] = nums[0];
        
        for(int i = 1; i < n; ++i)
            prefMin[i] = min(nums[i], prefMin[i-1]);
        
        stack<int> st;
        
        for(int i = n-1; i >= 0; --i)
        {
            if(nums[i] > prefMin[i])
            {
                while(!st.empty() and st.top() <= prefMin[i])
                    st.pop();
                if(!st.empty() and nums[i] > st.top())
                    return true;
                st.push(nums[i]);
            }
        }
        
        return false;
        
    }
};