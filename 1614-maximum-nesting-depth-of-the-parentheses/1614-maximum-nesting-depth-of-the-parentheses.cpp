class Solution {
public:
    int maxDepth(string s) {
        
        int open = 0, ans = 0;
        
        for(auto& ch : s)
        {
            if(ch == '(')
                ++open;
            else if(ch == ')')
                --open;
            ans = max(ans, open);
        }
        
        return ans;
    }
};