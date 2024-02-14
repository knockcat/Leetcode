class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> pos, neg;
        
        for(auto& ele : nums)
        {
            if(ele < 0)
                neg.push_back(ele);
            else
                pos.push_back(ele);
        }
        
        vector<int> ans(nums.size());
        
        int k = 0, i = 0, j = 0;
        
        while(i < pos.size() and j < pos.size())
        {
            ans[k++] = pos[i++];
            ans[k++] = neg[j++];
        }
        
        return ans;
    }
};