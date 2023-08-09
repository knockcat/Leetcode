class Solution {
    
private:
    int isPossibleToDivideInpPairs(int mid, int n, vector<int>& nums, int p)
    {
        int cnt = 0;
        int i = 1;
        
        while(i < n and cnt < p)
        {
            if(nums[i] - nums[i-1] <= mid)
            {
                i += 2;
                ++cnt;
            }
            else
                ++i;
        }
        
        return cnt >= p;
    }
    
public:
    int minimizeMax(vector<int>& nums, int p) {
        
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        int right = nums[n-1] - nums[0];
        int left = 0;
        int ans = right;
        
        
        while(left <= right)
        {
            int mid = (left + right) >> 1;
            
            if(isPossibleToDivideInpPairs(mid, n, nums, p))
            {
                ans = mid;
                right = mid-1;
            }
            else
                left = mid+1;
        }
        
        return ans;
        
    }
};