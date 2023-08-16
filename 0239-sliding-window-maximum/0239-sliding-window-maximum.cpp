class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int i = 0, j = 0;
        
        int n = nums.size();
        
        vector<int> ans;
        
        list<int> l;
        
        while(j < n)
        {
            while(!l.empty() and nums[l.back()] <= nums[j])
                l.pop_back();
            
            l.push_back(j);
            
            if(j - i + 1 == k)
            {
                ans.push_back(nums[l.front()]);
                
                if(l.front() == i)
                {
                    l.pop_front();
                }
                
                ++i;
            }
            
            ++j;
        }
        
        return ans;
        
    }
};