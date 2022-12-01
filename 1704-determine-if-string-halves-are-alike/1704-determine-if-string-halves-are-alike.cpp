class Solution {
public:
    bool halvesAreAlike(string s) {
        
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int one = 0 ,two = 0;
        
        int n = s.size();
        
        for(int i = 0; i<n/2; ++i)
        {
            if(find(vowels.begin(),vowels.end(),s[i]) != vowels.end())
                ++one;
        }
        
        for(int i = n/2; i<n; ++i)
        {
            if(find(vowels.begin(),vowels.end(),s[i]) != vowels.end())
                ++two;
        }
        
     return one == two;
    }
};