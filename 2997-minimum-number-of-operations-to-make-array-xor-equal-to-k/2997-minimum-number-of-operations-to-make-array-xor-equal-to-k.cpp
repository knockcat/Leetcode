class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        vector<int> bits(32,  0);
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < 32; ++j)
            {
                if(nums[i] & (1 << j))
                    ++bits[j];
            }
        }
        
        int op = 0;
        
        for(int i = 0; i < 32; ++i)
        {
            if(k & (1 << i))
            {
                if(bits[i] % 2 == 0)
                    ++op;
            }
            else
            {
                if(bits[i] & 1)
                    ++op;
            }
        }
        
        return op;
        
    }
};