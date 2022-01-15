680. Valid Palindrome II

class Solution {
public:
    bool validPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;
        int cnt = 0;
        
        while(start < end){
            if(s[start] == s[end])
            {
                start++;
                end--;
            }
            else
            {
                cnt++;
               start++;     //skip 1
            }
        }
        
        start = 0;
        end = s.size() - 1;
        int cnt1 = 0;
        
        while(start < end){
            if(s[start] == s[end])
            {
                start++;
                end--;  
            }
            else
            {
                cnt1++;
                end--;  //skip 1
            }
               
        }
        
        if(cnt == 1 || cnt1 == 1)   //del atmost one char
            return true;
        if(cnt == 0 || cnt1 == 0)    //palindrome
            return true;
        
        return false;
    }
};