345. Reverse Vowels of a String

class Solution {
public:
    
     bool isVowel(char ch)
    {
        if( ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U')
        {
            return true;
        }
        return false;
    }
    
    string reverseVowels(string s) {
        int st = 0;
        int e = s.length() - 1;
        
        while(st < e){
            if(isVowel(s[st]) && isVowel(s[e]))
            {
                swap(s[st],s[e]);
                st++;
                e--;
            }
            
            else
            {
                if(!isVowel(s[st]))
                    st++;
                if(!isVowel(s[e]))
                    e--;
            }
        }
        return s;
    }
};