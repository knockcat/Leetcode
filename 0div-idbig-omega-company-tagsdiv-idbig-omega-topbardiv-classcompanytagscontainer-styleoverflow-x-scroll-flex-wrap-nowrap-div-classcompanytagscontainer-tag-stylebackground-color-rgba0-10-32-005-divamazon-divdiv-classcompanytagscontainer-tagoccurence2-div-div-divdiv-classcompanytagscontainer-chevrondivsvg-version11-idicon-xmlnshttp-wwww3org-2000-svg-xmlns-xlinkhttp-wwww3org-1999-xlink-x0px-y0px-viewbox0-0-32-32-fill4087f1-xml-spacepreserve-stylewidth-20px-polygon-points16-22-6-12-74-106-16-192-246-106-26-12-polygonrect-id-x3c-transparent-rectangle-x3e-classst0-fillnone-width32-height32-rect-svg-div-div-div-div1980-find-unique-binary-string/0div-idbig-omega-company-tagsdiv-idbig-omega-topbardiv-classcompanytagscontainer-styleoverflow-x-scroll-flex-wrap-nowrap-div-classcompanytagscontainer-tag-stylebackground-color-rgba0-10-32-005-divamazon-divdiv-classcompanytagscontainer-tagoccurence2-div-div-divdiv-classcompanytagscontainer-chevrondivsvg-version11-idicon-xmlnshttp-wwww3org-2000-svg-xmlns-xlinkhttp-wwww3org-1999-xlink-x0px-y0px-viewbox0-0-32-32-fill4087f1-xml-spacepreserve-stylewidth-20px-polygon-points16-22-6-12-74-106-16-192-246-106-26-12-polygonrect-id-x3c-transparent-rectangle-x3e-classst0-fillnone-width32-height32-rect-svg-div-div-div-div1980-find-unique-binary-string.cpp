class Solution {
public:
    
    string ans;
    
    void helper(int n, string curr, unordered_set<string>& st)
    {
        if(curr.size() == n)
        {
            if(!st.count(curr))
                ans = curr;
            return;
        }
        curr += '0';
        helper(n, curr, st);
        curr.pop_back();
        curr += '1';
        helper(n, curr, st);
    }
    
    string findDifferentBinaryString(vector<string>& nums) {
        
        unordered_set<string> st(nums.begin(), nums.end());
        
        helper(nums.size(), "", st);
        
        return ans;
        
    }
};