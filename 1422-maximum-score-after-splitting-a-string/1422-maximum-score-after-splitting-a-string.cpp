class Solution {
public:
    int maxScore(string s) {
        
        int n = s.size();
        int ans = 0;
        
        vector<int> suffOne(n, 0);
        
        suffOne[n-1] = (s[n-1] == '1' ? 1 : 0);
        
        for(int i = n-2; i >= 1; --i)
        {
            suffOne[i] = (s[i] == '1' ? suffOne[i+1]+1 : suffOne[i+1]);
            
        }
        
        int zeroCnt = 0;
        
        for(int i = 0; i < n; ++i)
        {
            if(s[i] == '0' and i != n-1)
                ++zeroCnt;
            
            ans = max(ans, zeroCnt + suffOne[i]);
        }
        
        return ans;
        
    }
};