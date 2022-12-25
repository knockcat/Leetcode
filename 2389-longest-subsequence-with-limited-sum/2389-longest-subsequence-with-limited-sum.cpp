class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        sort(nums.begin(),nums.end());
        
        vector<int> ans;
        for(int i =0 ; i<queries.size(); ++i)
        {
            int sum = 0, total = queries[i], len = 0;
            for(int j = 0; j<nums.size(); ++j)
            {
                if(sum + nums[j] <= total)
                {
                    sum += nums[j];
                    ++len;
                }
                else
                {
                    break;
                }
            }
            ans.push_back(len);
        }
        return ans;
    }
};