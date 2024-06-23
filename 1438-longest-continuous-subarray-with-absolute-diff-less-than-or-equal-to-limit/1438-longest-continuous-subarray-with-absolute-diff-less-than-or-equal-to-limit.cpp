class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        
        list<int> maxi, mini;
        
        int i = 0, j = 0, n = nums.size();
        
        int ans = 0;
        
        while(j < n)
        {
            while(!maxi.empty() and nums[maxi.back()] < nums[j])
                maxi.pop_back();
            
            while(!mini.empty() and nums[mini.back()] > nums[j])
                mini.pop_back();
            
            maxi.push_back(j);
            mini.push_back(j);
            
            while(!maxi.empty() and !mini.empty() and nums[maxi.front()] - nums[mini.front()] > limit)
            {
                if(maxi.front() == i) maxi.pop_front();
                if(mini.front() == i) mini.pop_front();
                ++i;
            }
            
            ans = max(ans, j - i + 1);
            
            ++j;
        }
        
        return ans;
        
    }
};