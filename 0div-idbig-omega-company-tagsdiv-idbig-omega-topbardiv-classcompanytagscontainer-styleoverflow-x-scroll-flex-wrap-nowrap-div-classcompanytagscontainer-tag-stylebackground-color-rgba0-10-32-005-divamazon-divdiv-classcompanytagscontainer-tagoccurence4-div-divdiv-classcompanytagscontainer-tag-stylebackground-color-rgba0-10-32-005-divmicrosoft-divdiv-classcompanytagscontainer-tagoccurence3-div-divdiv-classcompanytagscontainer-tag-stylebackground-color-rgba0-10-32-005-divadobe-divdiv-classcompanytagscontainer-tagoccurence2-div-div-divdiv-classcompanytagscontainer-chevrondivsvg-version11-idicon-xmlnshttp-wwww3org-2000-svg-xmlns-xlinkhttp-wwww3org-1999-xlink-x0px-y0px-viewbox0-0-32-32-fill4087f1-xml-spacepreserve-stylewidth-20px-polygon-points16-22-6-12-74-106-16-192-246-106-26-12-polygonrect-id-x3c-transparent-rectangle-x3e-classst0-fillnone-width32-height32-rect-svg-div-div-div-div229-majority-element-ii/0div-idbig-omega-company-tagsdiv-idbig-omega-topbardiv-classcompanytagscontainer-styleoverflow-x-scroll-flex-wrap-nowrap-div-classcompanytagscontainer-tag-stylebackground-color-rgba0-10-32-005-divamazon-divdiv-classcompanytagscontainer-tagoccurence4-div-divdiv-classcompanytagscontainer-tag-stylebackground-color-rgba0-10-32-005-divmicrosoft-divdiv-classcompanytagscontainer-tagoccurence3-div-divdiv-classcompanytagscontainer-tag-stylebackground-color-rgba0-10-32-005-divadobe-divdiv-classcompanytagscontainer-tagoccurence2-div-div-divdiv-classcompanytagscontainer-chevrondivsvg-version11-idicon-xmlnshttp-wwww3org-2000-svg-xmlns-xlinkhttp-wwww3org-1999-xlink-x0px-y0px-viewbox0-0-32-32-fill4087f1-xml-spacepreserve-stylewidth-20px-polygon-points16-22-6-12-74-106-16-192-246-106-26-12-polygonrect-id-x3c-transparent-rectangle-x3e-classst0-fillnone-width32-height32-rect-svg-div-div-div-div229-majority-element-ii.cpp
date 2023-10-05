class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        
        int count1 = 0, count2 = 0;
        
        int num1 = INT_MAX, num2 = INT_MAX;
        
        for(auto& itr : nums)
        {
            if(itr == num1)
            {
                ++count1;
            }
            else if(itr == num2)
            {
                ++count2;
            }
            else if(count1 == 0)
            {
                count1 = 1;
                num1 = itr;
            }
            else if(count2 == 0)
            {
                count2 = 1;
                num2 = itr;
            }
            else
            {
                --count1, --count2;
            }
        }
        
        count1 = count2 = 0;
        
        for(auto& itr : nums)
        {
            if(itr == num1)
                ++count1;
            else if(itr == num2)
                ++count2;
        }
        
        vector<int> ans;
        
        if(count1 > n/3)
            ans.push_back(num1);
        if(count2 > n/3)
            ans.push_back(num2);
        
        return ans;
        
    }
};