class Solution {
public:
    
    void helper(int idx, int n, string str, set<char> st, int& maxLength, vector<string>& arr)
    {
        if(idx == n)
        {
            maxLength = max(maxLength, (int)str.size());
            return;
        }
        
        helper(idx+1, n, str, st, maxLength, arr);
        
        bool canTake = true;
        
        set<char> curr;
        
        for(auto& ch : arr[idx])
        {
            if(curr.count(ch))
                return;
            else
                curr.insert(ch);
        }
        
        if(canTake)
        {
            for(auto& ch : curr)
            {
                if(st.count(ch))
                    return;
            }
        }
        
      
        for(auto& ch : curr)
            st.insert(ch);

        helper(idx+1, n, str + arr[idx], st, maxLength, arr);

        for(auto& ch : curr)
            st.erase(ch);
        
    }
    
    int maxLength(vector<string>& arr) {
        
        int n = arr.size();
        
        set<char> st;
        string str;
        int maxLength = 0;
        
        helper(0, n, str, st, maxLength, arr);
        
        return maxLength;
    }
};