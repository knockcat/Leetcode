class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int start = 0, end = nums.size()-1;
        
        while(start <= end)
        {
            int mid = (start + end) >> 1;
            
            if(nums[mid] == target)
                return true;
            
            
            if(nums[mid] == nums[start] and nums[mid] == nums[end])
                ++start, --end;
            else if(nums[mid] >= nums[start])
            {
                if(target >= nums[start] and target <=  nums[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            else
            {
                if(target >= nums[mid] and target <= nums[end])
                {
                    start = mid+1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        
        return false;
        
    }
};