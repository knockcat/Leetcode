class Solution {
public:
    
    void solve(int k, int& ans, vector<int>& pref, vector<int>& suff)
    {
        int n = pref.size();
        for(int i = 0; i < k; ++i)
        {
            int end = n-(k-(i+1));
            int endSum = end < n ? suff[end] : 0;
            ans = max(ans, pref[i] + endSum);   
        }
    }
    
    int maxScore(vector<int>& cardPoints, int k) {
     
        int n = cardPoints.size();
        vector<int> pref(n, 0), suff(n, 0);
        
        pref[0] = cardPoints[0];
        suff[n-1] = cardPoints[n-1];
        
        for(int i = 1; i < n; ++i)
            pref[i] = (pref[i-1] + cardPoints[i]);
        
        for(int i = n-2; i >= 0; --i)
            suff[i] = (suff[i+1] + cardPoints[i]);
        
        int ans = 0;
        
        solve(k, ans, pref, suff);
        swap(pref, suff);
        reverse(pref.begin(), pref.end());
        reverse(suff.begin(), suff.end());
        solve(k, ans, pref, suff);
        
        return ans;
    }
};