class Solution {
public:
    string sortVowels(string s) {
        
        string vowels;
        
        auto isVowel = [&](char ch)
        {
            return (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U');
        };
        
        for(auto& ch : s)
        {
            if(isVowel(ch))
                vowels += ch;
        }
        
        sort(vowels.begin(), vowels.end());
        
        int i = 0;
        
        for(auto& ch : s)
        {
            if(isVowel(ch))
                ch = vowels[i++];
        }
        
        return s;
    }
};