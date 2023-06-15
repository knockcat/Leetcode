class Solution {
public:
    string longestPalindrome(string s) {
        
        int n = s.size();
        
        int maxi = 0;
        
        string ans;
        
         function<string(int,int)> helper = [=](int start, int end){
            
            while( start >= 0 and end < n)
            {
                if(s[start] == s[end])
                {
                    --start, ++end;
                }
                else 
                    break;
            }
            
            return s.substr(start+1, end-start-1);
            
        };
        
        for(int i = 0; i < n; ++i)
        {
            string oddCase = helper(i,i);
            
            if(oddCase.length() > maxi)
            {
                maxi = oddCase.length();
                ans = oddCase;
            }
            
            string evenCase = helper(i,i+1);
            
            if(evenCase.length() > maxi)
            {
                maxi = evenCase.length();
                ans = evenCase;
            }
        }
        
        
        return ans;
        
    }
};