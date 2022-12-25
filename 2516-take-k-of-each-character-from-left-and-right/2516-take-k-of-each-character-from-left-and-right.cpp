class Solution {
public:
    int takeCharacters(string s, int k) {
        
        int ca,cb, cc;
        ca = cb = cc = 0;
        int n = s.size();
        unordered_map<int,int> mpa, mpb, mpc;
        int ans = -1;
        
        mpa[0] = mpb[0] = mpc[0] = n;
        
        for(int i = n-1 ; i >= 0; --i)
        {
            if(s[i] == 'a')
            {
                ++ca;
                mpa[ca] = i;
            }
            if(s[i] == 'b')
            {
                ++cb;
                mpb[cb] = i;
            }
            if(s[i] == 'c')
            {
                ++cc;
                mpc[cc] = i;
            }
        }
        
        ca = cb = cc = 0;
        
        if(k == 0)
            return 0;
        
        if(mpa.find(k) == mpa.end() or mpb.find(k) == mpb.end() or mpc.find(k) == mpc.end())
            return -1;
        
        ans = n - min({mpa[k],mpb[k] , mpc[k]});
        
        for(int i = 0; i<n; ++i)
        {
            if(s[i] == 'a')
                ++ca;
            if(s[i] == 'b')
                ++cb;
            if(s[i] == 'c')
                ++cc;
            
            // ans = min(ans, i + 1 + n - min({mpa[k-ca],mpb[k-cb],mpc[k-cc]}));
            ans=min(ans, i+1+n-min(mpa[max(0, k-ca)], min(mpb[max(0, k-cb)], mpc[max(0, k-cc)])));
        }
        
        return ans;
    }
};