class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        // storing secNum in next 10 bits and or with first to combine second and first
        for(int i = n; i < 2*n; ++i)
        {
            int secNum = nums[i] << 10;
            nums[i-n] |= secNum;
        }
        
        for(int i = n-1; i>= 0; --i)
        {
            int secNum = nums[i] >> 10;
            int firstNum = nums[i] & 1023;
            
            nums[2*i+1] = secNum;
            nums[2*i] = firstNum;
        }
        return nums;
    }
};