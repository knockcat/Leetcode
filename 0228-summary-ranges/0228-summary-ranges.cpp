class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<string> ans;
        
        if(n == 0)
            return ans;
        
        int curr = nums[0], track = nums[0], prev = nums[0];
        
        for(int i = 1; i < n; ++i)
        {
            if(nums[i] == track + 1)
            {
                ++track;
            }
            else
            {
                if(curr == prev)
                    ans.push_back(to_string(curr));
                else
                {
                    string str = to_string(curr);

                    str += "->" + to_string(prev);

                    ans.push_back(str);
                }
                
                curr = nums[i];
                    
                track = nums[i];
                
                
            }
            
            prev = nums[i];
        }
        
        if(curr == prev)
            ans.push_back(to_string(curr));
        else
        {
             string str = to_string(curr);
                
                str += "->" + to_string(prev);
                
                ans.push_back(str);
        }
        
        return ans;
        
    }
};