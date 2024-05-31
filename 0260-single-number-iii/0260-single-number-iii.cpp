class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int b1 = 0, b2 = 0;
        
        long long xorr = 0;
        
        for(auto& ele : nums)
            xorr ^= ele;
        
        long long rightMost = (xorr&(xorr-1)) ^ xorr;
        
        for(auto& ele : nums)
        {
            if(ele & rightMost)
                b1 ^= ele;
            else
                b2 ^= ele;
        }
        
        return {b1, b2};
    }
};