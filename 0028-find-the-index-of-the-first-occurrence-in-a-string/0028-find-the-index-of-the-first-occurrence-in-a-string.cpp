class Solution {
public:
    
    vector<int> prefix_function(string s)   
    {
        int n = s.size();
        vector<int> pi(n,0);

        for(int i = 1;  i<n; i++)
        {
            int j = pi[i-1];
            while(j>0 and s[i]!=s[j])
                j = pi[j-1];

            if(s[i] == s[j])
                j++;
            pi[i] = j;
        }
    //Time Complexity = O(n)
    return pi;
    }
    
    int strStr(string haystack, string needle)
    {
        if(needle.length() == 0)
            return 0;
        
        vector<int> prefix = prefix_function(needle);
        
        int pos = -1;
        int i(0), j(0);
        while(i<haystack.size())
        {
            if(haystack[i] == needle[j])
            {
                i++;
                j++;
            }
            else
            {
                if(j!=0)
                    j = prefix[j-1];
                else
                    i++;
            }

            if(j == needle.size())
            {
                pos = i - needle.size();
                break;
            }
        }

        cout<<pos;
        return pos;
        
    }
};