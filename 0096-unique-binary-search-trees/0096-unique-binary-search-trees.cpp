class Solution {
    
private:
    int helper(int n)
    {
        if(n <= 1)
            return 1;
        
        int ans = 0;
        
        for(int i = 1; i <= n; ++i)
        {
            int leftPossibleSubtrees = helper(i-1);
            int rightPossibleSubtrees = helper(n-i);
            
            ans += (leftPossibleSubtrees * rightPossibleSubtrees);
        }
        return ans;
    }
    
public:
    int numTrees(int n) {
        
        return helper(n);
        
    }
};