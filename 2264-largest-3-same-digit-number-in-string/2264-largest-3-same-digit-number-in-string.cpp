class Solution {
public:
    string largestGoodInteger(string num) {
        
        int n = num.size();
        
        unordered_map<char, int> mp;
        
        int maxi = 0;
        string ans;
        
        int i = 0, j = 0, k = 3;
        
        string curr;
        
        while(j < n)
        {
            ++mp[num[j]];
            
            curr += num[j];
            
            if(curr.size() == 3)
            {
                int number = stoi(curr);
                if(number >= maxi and mp.size() == 1)
                {
                    maxi = number;
                    ans = curr;
                }
                
                --mp[num[i]];
                if(mp[num[i]] == 0)
                    mp.erase(num[i]);
                ++i;
                
                curr.erase(curr.begin());
            }
            
            ++j;
        }
        
        return ans;
    }
};