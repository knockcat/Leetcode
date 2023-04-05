class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        
        int n = nums.size();
        long long sum = nums[0];
        long long mini = nums[0];
        
        for(int i = 1; i<n; ++i)
        {
            sum += nums[i];
            
            if(nums[i] > mini)
            {
                long long avg = sum/(i+1);
                if(avg >= mini)
                {
                    if(sum % (i+1))
                        mini = avg + 1;
                    else
                        mini = avg;
                }    
            }
        }
        
        return mini;
    }
};