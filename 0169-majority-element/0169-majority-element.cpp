class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int cnt = 1, num1 = nums[0], n = nums.size();
        
        for(int i = 1; i < n; ++i)
        {
            if(num1 != nums[i])
                --cnt;
            else
                ++cnt;
            
            if(cnt == 0)
            {
                cnt = 1;
                num1 = nums[i];
            }
        }
        
        return num1;
    }
};