//✅ 414. Third Maximum Number

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max = LONG_MIN;
        long smax = LONG_MIN;
        long tmax = LONG_MIN;
       
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] == max | nums[i] == smax | nums[i] ==tmax)  continue;
            if(nums[i]>max)
            {
                tmax = smax;
                smax = max;
                max =  nums[i];
            }
            else if(nums[i] > smax)
            {
                tmax = smax;
                smax = nums[i];
            }
            else if(nums[i]>=tmax)
                tmax = nums[i];
        }
        return tmax == LONG_MIN ? max : tmax;
    }
};

