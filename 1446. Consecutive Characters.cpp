1446.✅ Consecutive Characters

class Solution {
public:
    int maxPower(string s) {
       int ans=1, count=1;
        for(int i=0; i< s.size(); i++)
        {
            if(s[i] == s[i+1])
            {
                count++;
                ans = max(ans, count);
            }
            else 
                count=1;  
        }
        return ans;
    }
};

