class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        if(k < 0)
            return 0;
        
        unordered_map<int,int> m;
        for(int i= 0; i<nums.size() ; ++i)
            ++m[nums[i]];
        
        int cnt = 0;
        
        if(k == 0)
        {
            for(auto x : m)
            {
                if(x.second > 1)
                    ++cnt;
                
            }
            return cnt;
        }
        
        for(auto x : m)
        {
            if(m.count(x.first - k)) //nums[i] - nums[j] = k => nums[i] - k = nums[j]
                ++cnt;
        }
        
        return cnt;
    }
};