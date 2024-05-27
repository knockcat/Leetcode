class Solution {
public:
    int specialArray(vector<int>& nums) {

        int n = nums.size();
        
        vector<int> pref(1001, 0);
        
        for(auto& ele : nums)
            ++pref[ele];
        
        for(int i = 999; i >= 0; --i)
            pref[i] += pref[i+1];
        
        for(int i = 1; i <= 1000; ++i)
        {
            if(pref[i] == i)
                return i;
        }
        
        return -1;
    }
};