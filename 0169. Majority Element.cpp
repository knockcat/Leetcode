// 169. Majority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans = nums.size();
        
        for(int i = 0; i< nums.size(); i++)
        {
            m[nums[i]]++;
        }
        
        for(int i = 0; i< nums.size(); i++)
        {
            if(m[nums[i]] > (nums.size()/2))
            {
                ans =  nums[i];
            break;
            }
        }
        return ans;
    }
};