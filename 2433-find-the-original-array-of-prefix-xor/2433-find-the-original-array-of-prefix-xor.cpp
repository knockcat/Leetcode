class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        
        int n = pref.size();
        
        vector<int> ans(n);
        
        ans[0] = pref[0];
        
        int currXor = pref[0];
        
        for(int i = 1; i < n; ++i)
        {
            int mask = 0;
            int newXor = pref[i];
            
            for(int i = 0; i < 32; ++i)
            {
                if(!(currXor & (1 << i)) and (newXor & (1 << i)))
                    mask |= (1<<i);
                else if((currXor & (1 << i)) and !(newXor & (1 << i)))
                    mask |= (1<<i);
            }
            ans[i] = mask;
            currXor ^= mask;
        }
        
        return ans;
    }
};