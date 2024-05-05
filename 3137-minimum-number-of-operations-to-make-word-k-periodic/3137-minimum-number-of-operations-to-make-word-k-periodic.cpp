class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        
        int n = word.size();
        
        vector<int> factors;
        
        for(int i = 0; i < n; ++i)
        {
            if(i == 0 or i % k == 0)
                factors.push_back(i);
        }
        
        map<string, int> mp;
        
        int maxi = 0;
        
        for(auto& idx : factors)
        {
            string st = word.substr(idx, k);
            ++mp[st];
            maxi = max(maxi, mp[st]);
        }
    
        return (int)factors.size() - maxi;
    }
};