392. Is Subsequence

class Solution {
public:
    int k = 0;
    bool isSubsequence(string s, string t) {
        for(int i = 0; i < t.length(); i++){
            if(t[i] == s[k])
                k++;
        }
        
        if(k == s.length()){
            return true;
        }
       
       return false;
        
    }
};