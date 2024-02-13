class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(auto& word : words)
        {
            int i = 0, j = word.size()-1;
            bool ok = true;
            
            while(i < j)
            {
                if(word[i] != word[j])
                {
                    ok = false;
                    break;
                }
                ++i, --j;
            }
            
            if(ok) return word;
        }
        
        return "";
    }
};