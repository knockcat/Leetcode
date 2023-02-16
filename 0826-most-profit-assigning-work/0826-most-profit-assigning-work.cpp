class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        
        int n = profit.size();
        vector<pair<int,int>> vp;
        
        for(int i = 0; i < n; ++i)
            vp.push_back({difficulty[i],profit[i]});
        
        sort(vp.begin(),vp.end());
        long long ans = 0;
        
        for(auto itr : worker)
        {
            int maxi = 0;
            for(auto x :  vp)
            {
                if(itr >= x.first)
                    maxi = max(maxi,x.second);
                else
                    break;
            }
            ans += maxi;
        }
        
        return (int)ans;
        
    }
};