class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        
        int sum = 0;
        
        for(auto& ele : nums)
            sum += ele;
        
        int totSum = (n * (n+1)) / 2;
        
        return totSum - sum;
        
    }
};