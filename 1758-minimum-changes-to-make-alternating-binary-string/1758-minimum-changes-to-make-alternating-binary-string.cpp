class Solution {
public:
    int minOperations(string s) {
     
        string startZero, startOne;
        
        int n = s.size(), cnt1 = 0, cnt2 = 0;
        
        for(int i = 0; i < n; ++i)
        {
            if(i%2 == 0)
                startZero += '0';
            else
                startZero += '1';
            
            if(i%2 == 0)
                startOne += '1';
            else
                startOne += '0';
            
            if(startZero.back() != s[i])
                ++cnt1;
            if(startOne.back() != s[i])
                ++cnt2;
        }
        
        return min(cnt1, cnt2);
        
    }
};