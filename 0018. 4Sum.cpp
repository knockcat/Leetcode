//✅ 18. 4Sum


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> v;
        
        if(nums.size() < 4)
           return v;
        
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i<nums.size() - 3; i++)
        {
            if(i != 0 && nums[i] == nums[i-1])
                continue;
            for(int j = i+1; j<nums.size() - 2; j++)
            {
                if(j!= i+1 && nums[j] == nums[j-1])
                    continue;
                int k = j+1;
                int l = nums.size() - 1;
                
                while( k < l)
                {
                    if(nums[i]+nums[j]+nums[k]+nums[l] < target)
                        k++;
                    else if(nums[i]+nums[j]+nums[k]+nums[l] > target)
                        l--;
                    else
                    {
                        v.push_back({nums[i],nums[j],nums[k],nums[l]});
                    
                        k++;
                        l--;
                
                        while(k<l && nums[l] == nums[l+1])
                            l--;
                        while(k < l && nums[k] == nums[k-1])
                            k++;
                    }
                }
            }
        }
        
        return v;
    }
};