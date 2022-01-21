// 628.✅ Maximum Product of Three Numbers

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int temp1 = nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        int temp2 = nums[0]*nums[1]*nums[nums.size()-1];
        
        return (temp1>temp2) ? temp1 : temp2;
    }
};

