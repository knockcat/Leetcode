class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int n = s.size();
        
        if(n == 1)
            return false;
        
        for(int i = 0; i < n/2; ++i)
        {
            int currLength = i+1;
            
            string currString = s.substr(0, i+1);
            string newString = currString;
            
            if(n % currLength == 0)
            {
                while(newString.size() < s.size())
                {
                    newString += currString;
                }
            }
            
            if(newString == s)
                return true;
        }
        
        return false;
    }
};