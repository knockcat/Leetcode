class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        
        int n = nums.size();
        
        int range = (1 << n);
        
        int ans = 0;
        
        for(int i = 0; i < range; ++i)
        {
            int curXor = 0;
            for(int j = 0; j < n; ++j)
            {
                if(i & (1 << j))
                    curXor ^= nums[j];
            }
            ans += curXor;
        }
        
        return ans;
    }
};