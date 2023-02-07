class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        map<int,int> mp;
        int i = 0, j = 0, n = fruits.size(), k = 2;
        int ans = 0;
        
        while(j < n)
        {
            ++mp[fruits[j]];
            if(mp.size() <= k)
            {
                ans = max(ans, j - i + 1);
            }
            else
            {
                while(mp.size() > k)
                {
                    --mp[fruits[i]];
                    if(mp[fruits[i]] == 0)
                        mp.erase(fruits[i]);
                    ++i;
                }
            }
            ++j;
            
        }
        
        return ans;
        
    }
};