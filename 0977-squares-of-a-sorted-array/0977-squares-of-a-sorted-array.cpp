class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> squares(n);
            
        int i = 0, j = n-1, k = n-1;
        
        while(k >= 0)
        {
            if(abs(nums[i]) > abs(nums[j]))
            {
                squares[k] = nums[i] * nums[i];
                ++i;
            }
            else
            {
                squares[k] = nums[j] * nums[j];
                --j;
            }
            --k;
        }
        
        return squares;
    }
};