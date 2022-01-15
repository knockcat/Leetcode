387. First Unique Character in a String

class Solution {
public:
    int firstUniqChar(string s) {
        int ans = -1;
        map<char,int> m;
        
        for(int i= 0 ; i<s.length(); i++){
            m[s[i]]++;
        }
        
        for(int i = 0; i<s.length(); i++)
        {
            if(m[s[i]] == 1)
            {
                ans = i;
                break;          
            }
        }
return ans;
    }
};