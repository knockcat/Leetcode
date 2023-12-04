class Solution {
public:
    string largestGoodInteger(string num) {
        
        int n = num.size();
        
        string ans;
        
        int i = 0, j = 0, k = 3;
        
        string curr;
        
        while(j < n)
        {
            curr += num[j];
            
            if(curr.size() == 3)
            {
                if(j>=2 and num[j] == num[j-1] and num[j-1] == num[j-2])
                {
                    ans = max(ans, curr);
                }
                curr.erase(curr.begin());
            }
            
            ++j;
        }
        
        return ans;
    }
};