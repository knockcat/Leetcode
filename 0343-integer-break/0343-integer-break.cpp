class Solution {
public:
    
    int ans;
    
    void helper(int idx, int prod, int n, int k)
    {
       if(n == 0 and k >= 2)
       {
           ans = max(ans, prod);
           return;
       }
        
       if(n-idx >= 0)
       {
           helper(idx, prod*idx, n-idx, k+1);
           helper(idx+1, prod, n, k);
       }      
      
    }
    
    int integerBreak(int n) {
       
       ans = 1; 
        
       helper(1, 1, n, 0);
        
       return ans; 
    }
};