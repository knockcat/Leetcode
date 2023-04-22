class Solution {
public:
    string shortestPalindrome(string s) {
        
        string rev = s;
        int n = s.size();
        
        reverse(rev.begin(), rev.end());
        
        string str = s + '#' + rev;
        
        int size = str.size();
        
        vector<int> lps(size,0);
        
        for(int i = 1; i < size; ++i)
        {
            int j = lps[i-1];
            
            while(j > 0 and str[i] != str[j])
                j = lps[j-1];
            
            if(str[i] == str[j])
                ++j;
            
            lps[i] = j;
        }
        
        string ans = rev.substr(0, n - lps[size - 1]) + s;
        
        return ans;
    }
};