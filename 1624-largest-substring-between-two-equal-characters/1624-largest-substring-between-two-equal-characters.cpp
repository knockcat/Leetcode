class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        
        int n = s.size();
        
        int ans = -1;
        
        vector<int> occurence(26, -1);
        
        for(int i = 0; i < n; ++i)
        {
            int firstOccurence = occurence[s[i] - 'a'];
            
            if(firstOccurence != -1)
                ans = max(ans, i - firstOccurence - 1);
            else
                occurence[s[i] - 'a'] = i;
        }

        return ans ;
    }
};