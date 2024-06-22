class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        int i = 0, j = 0, ans = 0;
        
        list<int> indexes;
        
        while(j < n)
        {
            if(nums[j] & 1)
                indexes.push_back(j);
            
            if(indexes.size() > k)
            {
                i = indexes.front() + 1;
                indexes.pop_front();
            }
            
            if(indexes.size() == k) ans += (indexes.front() - i + 1);
            
            ++j;
        }
        
        return ans;
        
    }
};