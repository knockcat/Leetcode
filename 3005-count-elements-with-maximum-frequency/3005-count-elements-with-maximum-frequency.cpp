class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> freq(101, 0);
        
        int sameFrequencyNum = 0, maxi = 0;
        
        for(int i = 0; i < n; ++i)
        {
            ++freq[nums[i]];
            maxi = max(maxi, freq[nums[i]]);
        }
        
        for(int i = 0; i < 101; ++i)
        {
            if(freq[i] == maxi)
                sameFrequencyNum += freq[i];
        }
        
        return sameFrequencyNum;
    }
};