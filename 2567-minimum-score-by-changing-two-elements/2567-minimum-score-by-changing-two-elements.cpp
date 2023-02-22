class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        // both last and secondLast same to 3rd last which is now max
        int a = nums[n-3] - nums[0];
        
        // both first and second to 3rd which is now min
        int b = nums[n-1] - nums[2];
        
        // last equals second last and first equals second , now min is second and max is secondLast
        int c = nums[n-2] - nums[1];
        
        return min({a,b,c});
            
    }
};