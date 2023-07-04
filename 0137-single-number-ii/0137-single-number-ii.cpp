class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ones = 0, twos = 0;
        
        for(auto itr : nums)
        {
            ones = (ones ^ itr) & (~twos);
            twos = (twos ^ itr) & (~ones);
        }
        
        return ones;
        
    }
};