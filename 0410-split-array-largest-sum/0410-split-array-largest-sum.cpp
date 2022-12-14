class Solution {
public:
    
    int canSplit(vector<int>& nums, int mid)
    {
        int count = 1;
        int sum =  0;
        
        for(auto itr : nums)
        {
            if(sum + itr > mid)
            {
                sum = itr;
                ++count;
            }
            else
                sum += itr;
        }
        return count;
    }
    
    int splitArray(vector<int>& nums, int k) {
        
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        
        int ans = low;
        
        while(low <= high)
        {
            int mid = (low + high) / 2;
            
            if(canSplit(nums,mid) > k)
            {
                low = mid + 1;
            }
            else
            {
                ans = mid;
                high = mid - 1;
            }
        }
        
        return ans;
    }
};