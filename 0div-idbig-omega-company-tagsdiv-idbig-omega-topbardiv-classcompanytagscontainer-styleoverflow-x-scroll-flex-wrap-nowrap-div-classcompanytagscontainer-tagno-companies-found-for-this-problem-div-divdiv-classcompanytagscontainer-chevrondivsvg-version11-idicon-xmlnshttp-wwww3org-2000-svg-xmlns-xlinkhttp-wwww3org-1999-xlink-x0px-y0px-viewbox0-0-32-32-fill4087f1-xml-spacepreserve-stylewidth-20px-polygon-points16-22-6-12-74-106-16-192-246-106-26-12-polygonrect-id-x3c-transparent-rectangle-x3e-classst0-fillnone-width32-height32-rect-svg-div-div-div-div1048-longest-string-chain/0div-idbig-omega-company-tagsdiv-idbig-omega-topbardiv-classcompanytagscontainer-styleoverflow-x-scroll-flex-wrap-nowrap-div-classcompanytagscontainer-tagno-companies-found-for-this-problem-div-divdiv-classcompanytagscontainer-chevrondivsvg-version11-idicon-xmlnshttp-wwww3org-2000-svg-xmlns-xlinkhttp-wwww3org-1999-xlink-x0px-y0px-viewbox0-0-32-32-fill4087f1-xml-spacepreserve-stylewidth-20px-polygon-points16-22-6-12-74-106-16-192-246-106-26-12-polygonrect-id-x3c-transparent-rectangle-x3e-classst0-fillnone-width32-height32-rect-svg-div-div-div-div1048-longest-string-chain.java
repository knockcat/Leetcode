class Solution {
    
    int[][]dp = new int[1001][1001];
    
    boolean isPredecessor(String s, String t)
    {
        int n = s.length();
        int m = t.length();
        
        if(n >= m || m - n != 1)
            return false;
        
        int k = 0;
        
        for(int i = 0; i < m && k < n; ++i)
        {
            if(t.charAt(i) == s.charAt(k))
                ++k;
        }
        
        return k == n;
    }
    
    int helper(int idx, int prevIdx, int n, String[] words)
    {
        if(idx == n)
            return 0;
        
        if(dp[idx][prevIdx+1] != -1)
            return dp[idx][prevIdx+1];
        
        int notTake = helper(idx+1, prevIdx, n, words);
        
        int take = 0;
        
        if(prevIdx == -1 || isPredecessor(words[prevIdx], words[idx]))
        {
            take = 1 + helper(idx+1, idx, n, words);
        }
        
        return dp[idx][prevIdx + 1] = Math.max(take, notTake);
    }
    
    public int longestStrChain(String[] words) {
        
        int n = words.length;
        
        Arrays.sort(words, (String a, String b) -> a.length() - b.length());
        
        for(int[] row : dp)
            Arrays.fill(row,-1);
        
        return helper(0, -1, n, words);
        
    }
}