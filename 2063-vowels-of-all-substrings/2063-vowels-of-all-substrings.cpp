#define ll long long int
class Solution {
public:
    long long countVowels(string word) {
        
        // char at i will appear in (i+1) * (size - i) substrings
        
        ll n = word.size(), ans = 0;
        
        vector<int> count = {1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0};
        
        for(int i = 0 ; i < n; ++i){
            ans += count[word[i] - 'a'] * (i+1) * (n-i);
        }
        
        return ans;
        
    }
};