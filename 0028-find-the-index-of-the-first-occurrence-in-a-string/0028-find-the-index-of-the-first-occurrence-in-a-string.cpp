class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n = needle.size();
        vector<int> lps(n,0);

        for(int i = 1; i < n; ++i)
        {
            int j = lps[i-1] ;
            
            while(j > 0 and needle[i] != needle[j])
                j = lps[j-1];
            
            if(needle[i] == needle[j])
                ++j;
            
            lps[i] = j;
        }
        
        
        int i = 0, j = 0, m = haystack.length();
        
        while(i < m)
        {
            if(haystack[i] == needle[j])
            {
                ++i,++j;
            }
            else if(haystack[i] != needle[j]){
                if(j == 0)
                    ++i;
                else
                    j = lps[j-1];
            }
            if(j == n)
                return i - n;
        }
        
        return -1;
    }
};