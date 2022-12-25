class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        
        int n = words.size();
        int ans = INT_MAX;
        for(int i = 0; i < words.size(); ++i)
        {
            if(words[i] == target)
            {
                ans = min(ans,abs(startIndex - i));
                ans = min({ans,n - i + startIndex, n - startIndex + i});
            }
        }
        
        return (ans == INT_MAX) ? -1 : ans;
    }
};