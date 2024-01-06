class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        vector<int> ans(n);
        
        int k = n-1;
        
        for(int i = 1; i < n; i += 2)
        {
            ans[i] = nums[k--];
        }
        
        for(int i = 0; i < n; i += 2)
        {
            ans[i] = nums[k--];
        }
        
        nums = ans;
    }
};